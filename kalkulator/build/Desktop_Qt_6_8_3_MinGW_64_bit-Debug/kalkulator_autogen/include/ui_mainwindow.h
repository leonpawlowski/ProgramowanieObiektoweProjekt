/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *cyfr_4;
    QPushButton *dzielenie;
    QPushButton *cyfr_1;
    QPushButton *cyfr_3;
    QPushButton *rownaSie;
    QPushButton *cyfr_2;
    QPushButton *cyfr_6;
    QPushButton *cyfr_9;
    QPushButton *cyfr_8;
    QPushButton *cyfr_7;
    QPushButton *cyfr_5;
    QPushButton *pushButton_5;
    QPushButton *przecinek;
    QPushButton *dodawanie;
    QPushButton *cyfr_10;
    QPushButton *odejmowanie;
    QPushButton *pushButton_7;
    QPushButton *usuwanieZnaku;
    QPushButton *pamiecDoRownania;
    QPushButton *czyszczeniePamieci;
    QLineEdit *wyswietlacz;
    QWidget *gridLayoutWidget_2;
    QGridLayout *liczbyWRoznychSystemach;
    QLabel *tekstDwojkowy;
    QLabel *tekstCzworkowy;
    QLabel *tekstDziewiatkowy;
    QLabel *tekstSzostkowy;
    QLineEdit *liczbaWSystemie4;
    QLabel *tekstTrojkowy;
    QLabel *tekstOsoemkowy;
    QLineEdit *liczbaWSystemie2;
    QLineEdit *liczbaWSystemie3;
    QLabel *tekstSiodemkowy;
    QLabel *tesktPiatkowy;
    QLabel *tekstDziesietny;
    QLineEdit *liczbaWSystemie5;
    QLineEdit *liczbaWSystemie6;
    QLineEdit *liczbaWSystemie7;
    QLineEdit *liczbaWSystemie8;
    QLineEdit *liczbaWSystemie9;
    QLineEdit *liczbaWSystemie10;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *textMemory;
    QLineEdit *wyswietlaczPamieci;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(50, 300, 341, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cyfr_4 = new QPushButton(gridLayoutWidget);
        cyfr_4->setObjectName("cyfr_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cyfr_4->sizePolicy().hasHeightForWidth());
        cyfr_4->setSizePolicy(sizePolicy);
        cyfr_4->setMaximumSize(QSize(100, 100));
        cyfr_4->setAutoFillBackground(false);
        cyfr_4->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_4, 3, 0, 1, 1);

        dzielenie = new QPushButton(gridLayoutWidget);
        dzielenie->setObjectName("dzielenie");
        sizePolicy.setHeightForWidth(dzielenie->sizePolicy().hasHeightForWidth());
        dzielenie->setSizePolicy(sizePolicy);
        dzielenie->setMaximumSize(QSize(100, 100));
        dzielenie->setAutoFillBackground(false);
        dzielenie->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(dzielenie, 4, 3, 1, 1);

        cyfr_1 = new QPushButton(gridLayoutWidget);
        cyfr_1->setObjectName("cyfr_1");
        sizePolicy.setHeightForWidth(cyfr_1->sizePolicy().hasHeightForWidth());
        cyfr_1->setSizePolicy(sizePolicy);
        cyfr_1->setMaximumSize(QSize(100, 100));
        cyfr_1->setAutoFillBackground(false);
        cyfr_1->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_1, 1, 0, 1, 1);

        cyfr_3 = new QPushButton(gridLayoutWidget);
        cyfr_3->setObjectName("cyfr_3");
        sizePolicy.setHeightForWidth(cyfr_3->sizePolicy().hasHeightForWidth());
        cyfr_3->setSizePolicy(sizePolicy);
        cyfr_3->setMaximumSize(QSize(100, 100));
        cyfr_3->setAutoFillBackground(false);
        cyfr_3->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_3, 1, 2, 1, 1);

        rownaSie = new QPushButton(gridLayoutWidget);
        rownaSie->setObjectName("rownaSie");
        sizePolicy.setHeightForWidth(rownaSie->sizePolicy().hasHeightForWidth());
        rownaSie->setSizePolicy(sizePolicy);
        rownaSie->setMaximumSize(QSize(100, 100));
        rownaSie->setAutoFillBackground(false);
        rownaSie->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(rownaSie, 5, 3, 1, 1);

        cyfr_2 = new QPushButton(gridLayoutWidget);
        cyfr_2->setObjectName("cyfr_2");
        sizePolicy.setHeightForWidth(cyfr_2->sizePolicy().hasHeightForWidth());
        cyfr_2->setSizePolicy(sizePolicy);
        cyfr_2->setMaximumSize(QSize(100, 100));
        cyfr_2->setAutoFillBackground(false);
        cyfr_2->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_2, 1, 1, 1, 1);

        cyfr_6 = new QPushButton(gridLayoutWidget);
        cyfr_6->setObjectName("cyfr_6");
        sizePolicy.setHeightForWidth(cyfr_6->sizePolicy().hasHeightForWidth());
        cyfr_6->setSizePolicy(sizePolicy);
        cyfr_6->setMaximumSize(QSize(100, 100));
        cyfr_6->setAutoFillBackground(false);
        cyfr_6->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_6, 3, 2, 1, 1);

        cyfr_9 = new QPushButton(gridLayoutWidget);
        cyfr_9->setObjectName("cyfr_9");
        sizePolicy.setHeightForWidth(cyfr_9->sizePolicy().hasHeightForWidth());
        cyfr_9->setSizePolicy(sizePolicy);
        cyfr_9->setMaximumSize(QSize(100, 100));
        cyfr_9->setAutoFillBackground(false);
        cyfr_9->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_9, 4, 2, 1, 1);

        cyfr_8 = new QPushButton(gridLayoutWidget);
        cyfr_8->setObjectName("cyfr_8");
        sizePolicy.setHeightForWidth(cyfr_8->sizePolicy().hasHeightForWidth());
        cyfr_8->setSizePolicy(sizePolicy);
        cyfr_8->setMaximumSize(QSize(100, 100));
        cyfr_8->setAutoFillBackground(false);
        cyfr_8->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_8, 4, 1, 1, 1);

        cyfr_7 = new QPushButton(gridLayoutWidget);
        cyfr_7->setObjectName("cyfr_7");
        sizePolicy.setHeightForWidth(cyfr_7->sizePolicy().hasHeightForWidth());
        cyfr_7->setSizePolicy(sizePolicy);
        cyfr_7->setMaximumSize(QSize(100, 100));
        cyfr_7->setAutoFillBackground(false);
        cyfr_7->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_7, 4, 0, 1, 1);

        cyfr_5 = new QPushButton(gridLayoutWidget);
        cyfr_5->setObjectName("cyfr_5");
        sizePolicy.setHeightForWidth(cyfr_5->sizePolicy().hasHeightForWidth());
        cyfr_5->setSizePolicy(sizePolicy);
        cyfr_5->setMaximumSize(QSize(100, 100));
        cyfr_5->setAutoFillBackground(false);
        cyfr_5->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_5, 3, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMaximumSize(QSize(100, 100));
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(pushButton_5, 5, 0, 1, 1);

        przecinek = new QPushButton(gridLayoutWidget);
        przecinek->setObjectName("przecinek");
        sizePolicy.setHeightForWidth(przecinek->sizePolicy().hasHeightForWidth());
        przecinek->setSizePolicy(sizePolicy);
        przecinek->setMaximumSize(QSize(100, 100));
        przecinek->setAutoFillBackground(false);
        przecinek->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(przecinek, 5, 2, 1, 1);

        dodawanie = new QPushButton(gridLayoutWidget);
        dodawanie->setObjectName("dodawanie");
        sizePolicy.setHeightForWidth(dodawanie->sizePolicy().hasHeightForWidth());
        dodawanie->setSizePolicy(sizePolicy);
        dodawanie->setMaximumSize(QSize(100, 100));
        dodawanie->setAutoFillBackground(false);
        dodawanie->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(dodawanie, 1, 3, 1, 1);

        cyfr_10 = new QPushButton(gridLayoutWidget);
        cyfr_10->setObjectName("cyfr_10");
        sizePolicy.setHeightForWidth(cyfr_10->sizePolicy().hasHeightForWidth());
        cyfr_10->setSizePolicy(sizePolicy);
        cyfr_10->setMaximumSize(QSize(100, 100));
        cyfr_10->setAutoFillBackground(false);
        cyfr_10->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(cyfr_10, 5, 1, 1, 1);

        odejmowanie = new QPushButton(gridLayoutWidget);
        odejmowanie->setObjectName("odejmowanie");
        sizePolicy.setHeightForWidth(odejmowanie->sizePolicy().hasHeightForWidth());
        odejmowanie->setSizePolicy(sizePolicy);
        odejmowanie->setMaximumSize(QSize(100, 100));
        odejmowanie->setAutoFillBackground(false);
        odejmowanie->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(odejmowanie, 3, 3, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMaximumSize(QSize(100, 100));
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(pushButton_7, 0, 3, 1, 1);

        usuwanieZnaku = new QPushButton(gridLayoutWidget);
        usuwanieZnaku->setObjectName("usuwanieZnaku");
        sizePolicy.setHeightForWidth(usuwanieZnaku->sizePolicy().hasHeightForWidth());
        usuwanieZnaku->setSizePolicy(sizePolicy);
        usuwanieZnaku->setMaximumSize(QSize(100, 100));
        usuwanieZnaku->setAutoFillBackground(false);
        usuwanieZnaku->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(usuwanieZnaku, 0, 2, 1, 1);

        pamiecDoRownania = new QPushButton(gridLayoutWidget);
        pamiecDoRownania->setObjectName("pamiecDoRownania");
        sizePolicy.setHeightForWidth(pamiecDoRownania->sizePolicy().hasHeightForWidth());
        pamiecDoRownania->setSizePolicy(sizePolicy);
        pamiecDoRownania->setMaximumSize(QSize(100, 100));
        pamiecDoRownania->setAutoFillBackground(false);
        pamiecDoRownania->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(pamiecDoRownania, 0, 1, 1, 1);

        czyszczeniePamieci = new QPushButton(gridLayoutWidget);
        czyszczeniePamieci->setObjectName("czyszczeniePamieci");
        sizePolicy.setHeightForWidth(czyszczeniePamieci->sizePolicy().hasHeightForWidth());
        czyszczeniePamieci->setSizePolicy(sizePolicy);
        czyszczeniePamieci->setMaximumSize(QSize(100, 100));
        czyszczeniePamieci->setAutoFillBackground(false);
        czyszczeniePamieci->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        gridLayout->addWidget(czyszczeniePamieci, 0, 0, 1, 1);

        wyswietlacz = new QLineEdit(centralwidget);
        wyswietlacz->setObjectName("wyswietlacz");
        wyswietlacz->setGeometry(QRect(50, 210, 341, 71));
        wyswietlacz->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));
        wyswietlacz->setAlignment(Qt::AlignmentFlag::AlignCenter);
        wyswietlacz->setReadOnly(true);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(450, 180, 301, 266));
        liczbyWRoznychSystemach = new QGridLayout(gridLayoutWidget_2);
        liczbyWRoznychSystemach->setObjectName("liczbyWRoznychSystemach");
        liczbyWRoznychSystemach->setContentsMargins(0, 0, 0, 0);
        tekstDwojkowy = new QLabel(gridLayoutWidget_2);
        tekstDwojkowy->setObjectName("tekstDwojkowy");

        liczbyWRoznychSystemach->addWidget(tekstDwojkowy, 0, 0, 1, 1);

        tekstCzworkowy = new QLabel(gridLayoutWidget_2);
        tekstCzworkowy->setObjectName("tekstCzworkowy");

        liczbyWRoznychSystemach->addWidget(tekstCzworkowy, 2, 0, 1, 1);

        tekstDziewiatkowy = new QLabel(gridLayoutWidget_2);
        tekstDziewiatkowy->setObjectName("tekstDziewiatkowy");

        liczbyWRoznychSystemach->addWidget(tekstDziewiatkowy, 7, 0, 1, 1);

        tekstSzostkowy = new QLabel(gridLayoutWidget_2);
        tekstSzostkowy->setObjectName("tekstSzostkowy");

        liczbyWRoznychSystemach->addWidget(tekstSzostkowy, 4, 0, 1, 1);

        liczbaWSystemie4 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie4->setObjectName("liczbaWSystemie4");
        liczbaWSystemie4->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie4, 2, 1, 1, 1);

        tekstTrojkowy = new QLabel(gridLayoutWidget_2);
        tekstTrojkowy->setObjectName("tekstTrojkowy");

        liczbyWRoznychSystemach->addWidget(tekstTrojkowy, 1, 0, 1, 1);

        tekstOsoemkowy = new QLabel(gridLayoutWidget_2);
        tekstOsoemkowy->setObjectName("tekstOsoemkowy");

        liczbyWRoznychSystemach->addWidget(tekstOsoemkowy, 6, 0, 1, 1);

        liczbaWSystemie2 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie2->setObjectName("liczbaWSystemie2");
        liczbaWSystemie2->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie2, 0, 1, 1, 1);

        liczbaWSystemie3 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie3->setObjectName("liczbaWSystemie3");
        liczbaWSystemie3->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie3, 1, 1, 1, 1);

        tekstSiodemkowy = new QLabel(gridLayoutWidget_2);
        tekstSiodemkowy->setObjectName("tekstSiodemkowy");

        liczbyWRoznychSystemach->addWidget(tekstSiodemkowy, 5, 0, 1, 1);

        tesktPiatkowy = new QLabel(gridLayoutWidget_2);
        tesktPiatkowy->setObjectName("tesktPiatkowy");

        liczbyWRoznychSystemach->addWidget(tesktPiatkowy, 3, 0, 1, 1);

        tekstDziesietny = new QLabel(gridLayoutWidget_2);
        tekstDziesietny->setObjectName("tekstDziesietny");

        liczbyWRoznychSystemach->addWidget(tekstDziesietny, 8, 0, 1, 1);

        liczbaWSystemie5 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie5->setObjectName("liczbaWSystemie5");
        liczbaWSystemie5->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie5, 3, 1, 1, 1);

        liczbaWSystemie6 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie6->setObjectName("liczbaWSystemie6");
        liczbaWSystemie6->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie6, 4, 1, 1, 1);

        liczbaWSystemie7 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie7->setObjectName("liczbaWSystemie7");
        liczbaWSystemie7->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie7, 5, 1, 1, 1);

        liczbaWSystemie8 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie8->setObjectName("liczbaWSystemie8");
        liczbaWSystemie8->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie8, 6, 1, 1, 1);

        liczbaWSystemie9 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie9->setObjectName("liczbaWSystemie9");
        liczbaWSystemie9->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie9, 7, 1, 1, 1);

        liczbaWSystemie10 = new QLineEdit(gridLayoutWidget_2);
        liczbaWSystemie10->setObjectName("liczbaWSystemie10");
        liczbaWSystemie10->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));

        liczbyWRoznychSystemach->addWidget(liczbaWSystemie10, 8, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(50, 110, 341, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textMemory = new QLabel(gridLayoutWidget_3);
        textMemory->setObjectName("textMemory");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textMemory->sizePolicy().hasHeightForWidth());
        textMemory->setSizePolicy(sizePolicy1);
        textMemory->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        textMemory->setAutoFillBackground(false);
        textMemory->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textMemory->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(textMemory, 0, 0, 1, 1);

        wyswietlaczPamieci = new QLineEdit(gridLayoutWidget_3);
        wyswietlaczPamieci->setObjectName("wyswietlaczPamieci");
        sizePolicy.setHeightForWidth(wyswietlaczPamieci->sizePolicy().hasHeightForWidth());
        wyswietlaczPamieci->setSizePolicy(sizePolicy);
        wyswietlaczPamieci->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));
        wyswietlaczPamieci->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        wyswietlaczPamieci->setAlignment(Qt::AlignmentFlag::AlignCenter);
        wyswietlaczPamieci->setReadOnly(true);

        gridLayout_2->addWidget(wyswietlaczPamieci, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        cyfr_4->setDefault(false);
        dzielenie->setDefault(false);
        cyfr_1->setDefault(false);
        cyfr_3->setDefault(false);
        rownaSie->setDefault(false);
        cyfr_2->setDefault(false);
        cyfr_6->setDefault(false);
        cyfr_9->setDefault(false);
        cyfr_8->setDefault(false);
        cyfr_7->setDefault(false);
        cyfr_5->setDefault(false);
        pushButton_5->setDefault(false);
        przecinek->setDefault(false);
        dodawanie->setDefault(false);
        cyfr_10->setDefault(false);
        odejmowanie->setDefault(false);
        pushButton_7->setDefault(false);
        usuwanieZnaku->setDefault(false);
        pamiecDoRownania->setDefault(false);
        czyszczeniePamieci->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cyfr_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        dzielenie->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        cyfr_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        cyfr_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        rownaSie->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        cyfr_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        cyfr_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        cyfr_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        cyfr_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        cyfr_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        cyfr_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_5->setText(QString());
        przecinek->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        dodawanie->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        cyfr_10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        odejmowanie->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QString());
        usuwanieZnaku->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pamiecDoRownania->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        czyszczeniePamieci->setText(QCoreApplication::translate("MainWindow", "MClear", nullptr));
        tekstDwojkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">dwojkowy (2):</span></p></body></html>", nullptr));
        tekstCzworkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">czworkowy (4):</span></p></body></html>", nullptr));
        tekstDziewiatkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">dziewiatkowy (9):</span></p></body></html>", nullptr));
        tekstSzostkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">szostkowy (6):</span></p></body></html>", nullptr));
        tekstTrojkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">trojkowy (3):</span></p></body></html>", nullptr));
        tekstOsoemkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">osemkowy (8):</span></p></body></html>", nullptr));
        tekstSiodemkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">siodemkowy (7):</span></p></body></html>", nullptr));
        tesktPiatkowy->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">piatkowy (5):</span></p></body></html>", nullptr));
        tekstDziesietny->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">dziesietny (10):</span></p></body></html>", nullptr));
        textMemory->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">pamiec -&gt;</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
