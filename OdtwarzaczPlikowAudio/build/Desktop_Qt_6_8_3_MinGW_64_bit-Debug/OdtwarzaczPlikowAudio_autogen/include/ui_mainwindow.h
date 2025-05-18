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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QTabWidget *tabWidget;
    QWidget *Library;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchLibrary;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *librarySortButton;
    QPushButton *libraryEditButton;
    QTreeWidget *libraryTreeWidget;
    QWidget *allSongs;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_12;
    QTreeWidget *allFilesTreeWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QScrollArea *fileInfoScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_9;
    QLabel *label_8;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QSlider *verticalSlider;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *currentPlayingFileLabel;
    QLineEdit *currentPlayingFileLineEdit;
    QSlider *audioProgressBarHorizontalSlider;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *previewFilePushButton;
    QPushButton *pauseResumePushButton;
    QPushButton *nextFilePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(848, 534);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        Library = new QWidget();
        Library->setObjectName("Library");
        gridLayout = new QGridLayout(Library);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        searchLibrary = new QLineEdit(Library);
        searchLibrary->setObjectName("searchLibrary");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchLibrary->sizePolicy().hasHeightForWidth());
        searchLibrary->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(searchLibrary);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        librarySortButton = new QPushButton(Library);
        librarySortButton->setObjectName("librarySortButton");
        sizePolicy.setHeightForWidth(librarySortButton->sizePolicy().hasHeightForWidth());
        librarySortButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(librarySortButton);

        libraryEditButton = new QPushButton(Library);
        libraryEditButton->setObjectName("libraryEditButton");
        sizePolicy.setHeightForWidth(libraryEditButton->sizePolicy().hasHeightForWidth());
        libraryEditButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(libraryEditButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        libraryTreeWidget = new QTreeWidget(Library);
        libraryTreeWidget->setObjectName("libraryTreeWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(libraryTreeWidget->sizePolicy().hasHeightForWidth());
        libraryTreeWidget->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(libraryTreeWidget, 1, 0, 1, 1);

        tabWidget->addTab(Library, QString());
        allSongs = new QWidget();
        allSongs->setObjectName("allSongs");
        verticalLayout_4 = new QVBoxLayout(allSongs);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        lineEdit_10 = new QLineEdit(allSongs);
        lineEdit_10->setObjectName("lineEdit_10");
        sizePolicy1.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy1);

        horizontalLayout_15->addWidget(lineEdit_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        pushButton_12 = new QPushButton(allSongs);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(pushButton_12);


        horizontalLayout_15->addLayout(horizontalLayout_16);


        verticalLayout_4->addLayout(horizontalLayout_15);

        allFilesTreeWidget = new QTreeWidget(allSongs);
        allFilesTreeWidget->setObjectName("allFilesTreeWidget");

        verticalLayout_4->addWidget(allFilesTreeWidget);

        tabWidget->addTab(allSongs, QString());

        horizontalLayout_13->addWidget(tabWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_10);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 274, 358));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName("listWidget");
        sizePolicy2.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(listWidget, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        horizontalLayout_13->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label);

        fileInfoScrollArea = new QScrollArea(centralwidget);
        fileInfoScrollArea->setObjectName("fileInfoScrollArea");
        fileInfoScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 157, 236));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(label_2);

        lineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit->setObjectName("lineEdit");
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);
        lineEdit->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName("label_3");
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_3);

        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_4->setObjectName("lineEdit_4");
        sizePolicy3.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy3);
        lineEdit_4->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName("label_11");
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_11);

        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_5->setObjectName("lineEdit_5");
        sizePolicy3.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy3);
        lineEdit_5->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName("label_4");
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_4);

        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_6->setObjectName("lineEdit_6");
        sizePolicy3.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy3);
        lineEdit_6->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName("label_12");
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_11->addWidget(label_12);

        lineEdit_7 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_7->setObjectName("lineEdit_7");
        sizePolicy3.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy3);
        lineEdit_7->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName("label_13");
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_13);

        lineEdit_8 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_8->setObjectName("lineEdit_8");
        sizePolicy3.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy3);
        lineEdit_8->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName("label_14");
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_14->addWidget(label_14);

        lineEdit_9 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_9->setObjectName("lineEdit_9");
        sizePolicy3.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy3);
        lineEdit_9->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEdit_9);


        verticalLayout->addLayout(horizontalLayout_14);

        fileInfoScrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_5->addWidget(fileInfoScrollArea);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_8);

        scrollArea_3 = new QScrollArea(centralwidget);
        scrollArea_3->setObjectName("scrollArea_3");
        sizePolicy2.setHeightForWidth(scrollArea_3->sizePolicy().hasHeightForWidth());
        scrollArea_3->setSizePolicy(sizePolicy2);
        scrollArea_3->setMaximumSize(QSize(16777215, 16777215));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 147, 124));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        checkBox = new QCheckBox(scrollAreaWidgetContents_3);
        checkBox->setObjectName("checkBox");
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(checkBox);

        checkBox_2 = new QCheckBox(scrollAreaWidgetContents_3);
        checkBox_2->setObjectName("checkBox_2");
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(scrollAreaWidgetContents_3);
        checkBox_3->setObjectName("checkBox_3");
        sizePolicy.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(scrollAreaWidgetContents_3);
        checkBox_4->setObjectName("checkBox_4");
        sizePolicy.setHeightForWidth(checkBox_4->sizePolicy().hasHeightForWidth());
        checkBox_4->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(checkBox_4);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_5->addWidget(scrollArea_3);


        horizontalLayout_13->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy4);
        verticalSlider->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        verticalSlider->setSliderPosition(49);
        verticalSlider->setTracking(true);
        verticalSlider->setOrientation(Qt::Orientation::Vertical);

        verticalLayout_2->addWidget(verticalSlider);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(pushButton_5);


        horizontalLayout_13->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        currentPlayingFileLabel = new QLabel(centralwidget);
        currentPlayingFileLabel->setObjectName("currentPlayingFileLabel");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(currentPlayingFileLabel->sizePolicy().hasHeightForWidth());
        currentPlayingFileLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(currentPlayingFileLabel);

        currentPlayingFileLineEdit = new QLineEdit(centralwidget);
        currentPlayingFileLineEdit->setObjectName("currentPlayingFileLineEdit");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(currentPlayingFileLineEdit->sizePolicy().hasHeightForWidth());
        currentPlayingFileLineEdit->setSizePolicy(sizePolicy6);
        currentPlayingFileLineEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(currentPlayingFileLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_4);

        audioProgressBarHorizontalSlider = new QSlider(centralwidget);
        audioProgressBarHorizontalSlider->setObjectName("audioProgressBarHorizontalSlider");
        sizePolicy1.setHeightForWidth(audioProgressBarHorizontalSlider->sizePolicy().hasHeightForWidth());
        audioProgressBarHorizontalSlider->setSizePolicy(sizePolicy1);
        audioProgressBarHorizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_7->addWidget(audioProgressBarHorizontalSlider);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        previewFilePushButton = new QPushButton(centralwidget);
        previewFilePushButton->setObjectName("previewFilePushButton");
        sizePolicy5.setHeightForWidth(previewFilePushButton->sizePolicy().hasHeightForWidth());
        previewFilePushButton->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(previewFilePushButton);

        pauseResumePushButton = new QPushButton(centralwidget);
        pauseResumePushButton->setObjectName("pauseResumePushButton");
        sizePolicy5.setHeightForWidth(pauseResumePushButton->sizePolicy().hasHeightForWidth());
        pauseResumePushButton->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(pauseResumePushButton);

        nextFilePushButton = new QPushButton(centralwidget);
        nextFilePushButton->setObjectName("nextFilePushButton");
        sizePolicy5.setHeightForWidth(nextFilePushButton->sizePolicy().hasHeightForWidth());
        nextFilePushButton->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(nextFilePushButton);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 848, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        librarySortButton->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        libraryEditButton->setText(QCoreApplication::translate("MainWindow", "edit", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = libraryTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Path", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Library), QCoreApplication::translate("MainWindow", "Library", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = allFilesTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("MainWindow", "Length", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "Path", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(allSongs), QCoreApplication::translate("MainWindow", "All Files", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "queve", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File Info", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Album:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Autor:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Length:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Path:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "auto odtwarzanie", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "losowe odtwarzanie", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "zapetlenie playlisty", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "zapetlenie utworu", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "output", nullptr));
        currentPlayingFileLabel->setText(QCoreApplication::translate("MainWindow", "Now Playing:", nullptr));
        previewFilePushButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pauseResumePushButton->setText(QCoreApplication::translate("MainWindow", "play/pause", nullptr));
        nextFilePushButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
