#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "kalkulator.h"
#include <QRegularExpressionValidator>
#include <QMessageBox>

kalkulator k1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->liczbaWSystemie10->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-9]{0,18}(\\.[0-9]{0,18})?$"), this));
    ui->liczbaWSystemie9->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-8]{0,19}(\\.[0-8]{0,19})?$"), this));
    ui->liczbaWSystemie8->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-7]{0,19}(\\.[0-7]{0,19})?$"), this));
    ui->liczbaWSystemie7->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-6]{0,19}(\\.[0-6]{0,19})?$"), this));
    ui->liczbaWSystemie6->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-5]{0,19}(\\.[0-5]{0,19})?$"), this));
    ui->liczbaWSystemie5->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-4]{0,19}(\\.[0-4]{0,19})?$"), this));
    ui->liczbaWSystemie4->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-3]{0,19}(\\.[0-3]{0,19})?$"), this));
    ui->liczbaWSystemie3->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-2]{0,19}(\\.[0-2]{0,19})?$"), this));
    ui->liczbaWSystemie2->setValidator(new QRegularExpressionValidator(QRegularExpression("^[0-1]{0,19}(\\.[0-1]{0,19})?$"), this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_cyfr_0_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"0");
}
void MainWindow::on_cyfr_1_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"1");
}
void MainWindow::on_cyfr_2_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"2");
}
void MainWindow::on_cyfr_3_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"3");
}
void MainWindow::on_cyfr_4_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"4");
}
void MainWindow::on_cyfr_5_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"5");
}
void MainWindow::on_cyfr_6_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"6");
}
void MainWindow::on_cyfr_7_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"7");
}
void MainWindow::on_cyfr_8_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"8");
}
void MainWindow::on_cyfr_9_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"9");
}
void MainWindow::on_przecinek_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    if(!currentText.contains('.'))
        ui->wyswietlacz->setText(currentText+".");
}
void MainWindow::on_backSpace_clicked()
{
    QString text = ui->wyswietlacz->text();
    text.chop(1);
    ui->wyswietlacz->setText(text);
}
void MainWindow::on_czyszczenieWyswietlacza_clicked()
{
    ui->wyswietlacz->clear();
    ui->wyswietlaczOperacji->clear();
    ui->wyswietlaczPierwszaLiczba->clear();
}
void MainWindow::on_pamiecDoRownania_clicked()
{
    QString currentText=ui->wyswietlaczPamieci->text();
    if(!(currentText==""))
        ui->wyswietlacz->setText(currentText);
}
void MainWindow::on_czyszczeniePamieci_clicked()
{
    ui->wyswietlaczPamieci->clear();
}
void MainWindow::on_dodajDoPamieci_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    if(currentText!="" && ui->wyswietlaczOperacji->text()=="" && ui->wyswietlaczPierwszaLiczba->text()==""){
        ui->wyswietlaczPamieci->setText(currentText);
        ui->wyswietlacz->clear();
    }
}
void MainWindow::on_pamiecDoKonwertowania_clicked()
{
    QString currentText=ui->wyswietlaczPamieci->text();
    if(!(currentText=="")){
        if(currentText[0]=='-')
            currentText.remove(0,1);
        ui->liczbaWSystemie10->setText(currentText);
        on_liczbaWSystemie10_textEdited(currentText);
    }
}

void MainWindow::obslugaLogiki(QString operacja){
    if(operacja=="+"){
        k1.dodawanie();
    }
    else if(operacja=="-"){
        k1.odejmowanie();
    }
    else if(operacja=="/"){
        k1.dzielenie();
    }
    else if(operacja=="*"){
        k1.mnozenie();
    }
    else if(operacja=="%"){
        k1.resztaZDzielenia();
    }
}

void MainWindow::operacjaMatematycznaKliknieta(QString tekst){
    QString operacja=ui->wyswietlaczOperacji->text();
    if(operacja==""){
        QString currentText=ui->wyswietlacz->text();
        if(!(currentText=="")){
            bool ok;
            k1.a=currentText.toDouble(&ok);
            ui->wyswietlaczPierwszaLiczba->setText(QString::number(k1.a));
            ui->wyswietlaczOperacji->setText(tekst);
            ui->wyswietlacz->clear();
        }
        //else if(tekst=="-"){
        //    ui->wyswietlacz->setText(tekst);
        //}
    }
    else{
        QString currentText=ui->wyswietlacz->text();
        if(currentText=="")
            ui->wyswietlaczOperacji->setText(tekst);
        else{
            bool ok;
            k1.b=currentText.toDouble(&ok);
            if(k1.b==0&&(operacja=="/"||operacja=="%")){
                QMessageBox::warning(this, "Blad", "Nie mozna dizelic przez 0!!!");
                ui->wyswietlacz->clear();
            }
            else{
                obslugaLogiki(operacja);
                ui->wyswietlaczPamieci->setText(QString::number(k1.mem));
                k1.a=k1.mem;
                ui->wyswietlaczPierwszaLiczba->setText(QString::number(k1.a));
                ui->wyswietlaczOperacji->setText(tekst);
                ui->wyswietlacz->clear();
            }
        }
    }
}

void MainWindow::on_dodawanie_clicked()
{
    operacjaMatematycznaKliknieta("+");
}
void MainWindow::on_odejmowanie_clicked()
{
    operacjaMatematycznaKliknieta("-");
}
void MainWindow::on_dzielenie_clicked()
{
    operacjaMatematycznaKliknieta("/");
}
void MainWindow::on_mnozenie_clicked()
{
    operacjaMatematycznaKliknieta("*");
}
void MainWindow::on_resztaZDzielenia_clicked()
{
    operacjaMatematycznaKliknieta("%");
}
void MainWindow::on_rownaSie_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    if(!(currentText=="")){
        QString operacja=ui->wyswietlaczOperacji->text();
        bool ok;
        k1.b=currentText.toDouble(&ok);
        if(k1.b==0&&(operacja=="/"||operacja=="%")){
            QMessageBox::warning(this, "Blad", "Nie mozna dizelic przez 0!!!");
            ui->wyswietlacz->clear();
        }
        else{
            obslugaLogiki(operacja);
            ui->wyswietlaczPamieci->setText(QString::number(k1.mem));

            k1.a=k1.mem;
            ui->wyswietlaczPierwszaLiczba->clear();
            ui->wyswietlaczOperacji->clear();
            ui->wyswietlacz->clear();
        }
    }
}

void MainWindow::on_ujemnaLiczba_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    if(currentText!=""){
        if(currentText[0]=="-")
            currentText.remove(0,1);
        else
            currentText="-"+currentText;
        ui->wyswietlacz->setText(currentText);
    }
    else
        ui->wyswietlacz->setText("-");
}

void MainWindow::liczbaWSystemieod2do9(int podstawa,const QString &arg1){
    k1.liczba=arg1;
    k1.konwersjaSystemowLiczbowychZOd2Do9Do10(podstawa,k1.liczba);
    if(podstawa!=2)
        ui->liczbaWSystemie2->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(2,k1.liczba));
    if(podstawa!=3)
        ui->liczbaWSystemie3->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(3,k1.liczba));
    if(podstawa!=4)
        ui->liczbaWSystemie4->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(4,k1.liczba));
    if(podstawa!=5)
        ui->liczbaWSystemie5->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(5,k1.liczba));
    if(podstawa!=6)
        ui->liczbaWSystemie6->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(6,k1.liczba));
    if(podstawa!=7)
        ui->liczbaWSystemie7->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(7,k1.liczba));
    if(podstawa!=8)
        ui->liczbaWSystemie8->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(8,k1.liczba));
    if(podstawa!=9)
        ui->liczbaWSystemie9->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(9,k1.liczba));
    ui->liczbaWSystemie10->setText(k1.liczba);
}
void MainWindow::on_liczbaWSystemie10_textEdited(const QString &arg1)
{
    k1.liczba=arg1;
    ui->liczbaWSystemie2->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(2,k1.liczba));
    ui->liczbaWSystemie3->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(3,k1.liczba));
    ui->liczbaWSystemie4->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(4,k1.liczba));
    ui->liczbaWSystemie5->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(5,k1.liczba));
    ui->liczbaWSystemie6->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(6,k1.liczba));
    ui->liczbaWSystemie7->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(7,k1.liczba));
    ui->liczbaWSystemie8->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(8,k1.liczba));
    ui->liczbaWSystemie9->setText(k1.konwersjaSystemowLiczbowychZ10Do2Do9(9,k1.liczba));
}

void MainWindow::on_liczbaWSystemie2_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(2,arg1);
}
void MainWindow::on_liczbaWSystemie3_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(3,arg1);
}
void MainWindow::on_liczbaWSystemie4_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(4,arg1);
}
void MainWindow::on_liczbaWSystemie5_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(5,arg1);
}
void MainWindow::on_liczbaWSystemie6_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(6,arg1);
}
void MainWindow::on_liczbaWSystemie7_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(7,arg1);
}
void MainWindow::on_liczbaWSystemie8_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(8,arg1);
}
void MainWindow::on_liczbaWSystemie9_textEdited(const QString &arg1)
{
    liczbaWSystemieod2do9(9,arg1);
}

void MainWindow::on_actionO_autorze_triggered()
{
    QMessageBox::about(this,"O autorze","Autor: Leon Pawlowski\nNr indeksu: 287089");
}

