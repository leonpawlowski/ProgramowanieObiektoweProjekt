#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "kalkulator.h"

kalkulator k1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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
void MainWindow::on_cyfr_10_clicked()
{
    QString currentText=ui->wyswietlacz->text();
    ui->wyswietlacz->setText(currentText+"0");
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
        ui->liczbaWSystemie10->setText(currentText);
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
    }
    else{
        QString currentText=ui->wyswietlacz->text();
        if(currentText=="")
            ui->wyswietlaczOperacji->setText(tekst);
        else{
            bool ok;
            k1.b=currentText.toDouble(&ok);
            if(k1.b==0&&(operacja=="/"||operacja=="%")){
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
    if(currentText==""){
        ui->wyswietlaczOperacji->clear();
        ui->wyswietlaczPierwszaLiczba->clear();
    }
    else{
        QString operacja=ui->wyswietlaczOperacji->text();
        bool ok;
        k1.b=currentText.toDouble(&ok);
        if(k1.b==0&&(operacja=="/"||operacja=="%")){
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
void MainWindow::on_liczbaWSystemie10_textChanged(const QString &arg1)
{
    bool ok;
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

