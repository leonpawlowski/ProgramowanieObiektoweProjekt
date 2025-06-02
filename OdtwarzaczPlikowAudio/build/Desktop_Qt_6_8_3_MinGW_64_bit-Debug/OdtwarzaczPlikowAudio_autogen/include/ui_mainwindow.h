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
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout;
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
    QLabel *queveLabel;
    QScrollArea *queveScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QListWidget *queveListWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *fileInfoLabel;
    QScrollArea *fileInfoScrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QFormLayout *formLayout;
    QLabel *fileNameLabel;
    QLineEdit *fileNameLinEdit;
    QLabel *fileAlbumLabel;
    QLineEdit *fileAlbumLineEdit;
    QLabel *fileAutorLabel;
    QLineEdit *fileAutorLineEdit;
    QLabel *fileDurationLabel;
    QLineEdit *fileDurationLineEdit;
    QLabel *fileSizeLabel;
    QLineEdit *fileSizeLineEdit;
    QLabel *fileTypeLabel;
    QLineEdit *fileTypeLineEdit;
    QLineEdit *filePathLineEdit;
    QLabel *filePathLabel;
    QLabel *OptionsLabel;
    QScrollArea *OptionsScrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *autoPlayCheckBox;
    QCheckBox *shufflePlayCheckBox;
    QCheckBox *loopQueveCheckBox;
    QCheckBox *loopFileCheckBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *volumeLabel;
    QSlider *volumeVerticalSlider;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *currentPlayingFileLabel;
    QLineEdit *currentPlayingFileLineEdit;
    QSlider *audioProgressBarHorizontalSlider;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *progressLabel;
    QLabel *durationLabel;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *previousFilePushButton;
    QPushButton *pauseResumePushButton;
    QPushButton *nextFilePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(846, 578);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
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
        libraryTreeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

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
        queveLabel = new QLabel(centralwidget);
        queveLabel->setObjectName("queveLabel");
        sizePolicy.setHeightForWidth(queveLabel->sizePolicy().hasHeightForWidth());
        queveLabel->setSizePolicy(sizePolicy);
        queveLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        queveLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(queveLabel);

        queveScrollArea = new QScrollArea(centralwidget);
        queveScrollArea->setObjectName("queveScrollArea");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(queveScrollArea->sizePolicy().hasHeightForWidth());
        queveScrollArea->setSizePolicy(sizePolicy3);
        queveScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 274, 376));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        queveListWidget = new QListWidget(scrollAreaWidgetContents);
        queveListWidget->setObjectName("queveListWidget");
        sizePolicy2.setHeightForWidth(queveListWidget->sizePolicy().hasHeightForWidth());
        queveListWidget->setSizePolicy(sizePolicy2);
        queveListWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(queveListWidget, 0, 0, 1, 1);

        queveScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(queveScrollArea);


        horizontalLayout_13->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        fileInfoLabel = new QLabel(centralwidget);
        fileInfoLabel->setObjectName("fileInfoLabel");
        sizePolicy.setHeightForWidth(fileInfoLabel->sizePolicy().hasHeightForWidth());
        fileInfoLabel->setSizePolicy(sizePolicy);
        fileInfoLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        fileInfoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(fileInfoLabel);

        fileInfoScrollArea = new QScrollArea(centralwidget);
        fileInfoScrollArea->setObjectName("fileInfoScrollArea");
        sizePolicy3.setHeightForWidth(fileInfoScrollArea->sizePolicy().hasHeightForWidth());
        fileInfoScrollArea->setSizePolicy(sizePolicy3);
        fileInfoScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 155, 222));
        formLayout = new QFormLayout(scrollAreaWidgetContents_4);
        formLayout->setObjectName("formLayout");
        fileNameLabel = new QLabel(scrollAreaWidgetContents_4);
        fileNameLabel->setObjectName("fileNameLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy4);
        fileNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, fileNameLabel);

        fileNameLinEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileNameLinEdit->setObjectName("fileNameLinEdit");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fileNameLinEdit->sizePolicy().hasHeightForWidth());
        fileNameLinEdit->setSizePolicy(sizePolicy5);
        fileNameLinEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, fileNameLinEdit);

        fileAlbumLabel = new QLabel(scrollAreaWidgetContents_4);
        fileAlbumLabel->setObjectName("fileAlbumLabel");
        sizePolicy4.setHeightForWidth(fileAlbumLabel->sizePolicy().hasHeightForWidth());
        fileAlbumLabel->setSizePolicy(sizePolicy4);
        fileAlbumLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, fileAlbumLabel);

        fileAlbumLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileAlbumLineEdit->setObjectName("fileAlbumLineEdit");
        sizePolicy5.setHeightForWidth(fileAlbumLineEdit->sizePolicy().hasHeightForWidth());
        fileAlbumLineEdit->setSizePolicy(sizePolicy5);
        fileAlbumLineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, fileAlbumLineEdit);

        fileAutorLabel = new QLabel(scrollAreaWidgetContents_4);
        fileAutorLabel->setObjectName("fileAutorLabel");
        sizePolicy4.setHeightForWidth(fileAutorLabel->sizePolicy().hasHeightForWidth());
        fileAutorLabel->setSizePolicy(sizePolicy4);
        fileAutorLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, fileAutorLabel);

        fileAutorLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileAutorLineEdit->setObjectName("fileAutorLineEdit");
        sizePolicy5.setHeightForWidth(fileAutorLineEdit->sizePolicy().hasHeightForWidth());
        fileAutorLineEdit->setSizePolicy(sizePolicy5);
        fileAutorLineEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, fileAutorLineEdit);

        fileDurationLabel = new QLabel(scrollAreaWidgetContents_4);
        fileDurationLabel->setObjectName("fileDurationLabel");
        sizePolicy4.setHeightForWidth(fileDurationLabel->sizePolicy().hasHeightForWidth());
        fileDurationLabel->setSizePolicy(sizePolicy4);
        fileDurationLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, fileDurationLabel);

        fileDurationLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileDurationLineEdit->setObjectName("fileDurationLineEdit");
        sizePolicy5.setHeightForWidth(fileDurationLineEdit->sizePolicy().hasHeightForWidth());
        fileDurationLineEdit->setSizePolicy(sizePolicy5);
        fileDurationLineEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, fileDurationLineEdit);

        fileSizeLabel = new QLabel(scrollAreaWidgetContents_4);
        fileSizeLabel->setObjectName("fileSizeLabel");
        sizePolicy4.setHeightForWidth(fileSizeLabel->sizePolicy().hasHeightForWidth());
        fileSizeLabel->setSizePolicy(sizePolicy4);
        fileSizeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, fileSizeLabel);

        fileSizeLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileSizeLineEdit->setObjectName("fileSizeLineEdit");
        sizePolicy5.setHeightForWidth(fileSizeLineEdit->sizePolicy().hasHeightForWidth());
        fileSizeLineEdit->setSizePolicy(sizePolicy5);
        fileSizeLineEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, fileSizeLineEdit);

        fileTypeLabel = new QLabel(scrollAreaWidgetContents_4);
        fileTypeLabel->setObjectName("fileTypeLabel");
        sizePolicy4.setHeightForWidth(fileTypeLabel->sizePolicy().hasHeightForWidth());
        fileTypeLabel->setSizePolicy(sizePolicy4);
        fileTypeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, fileTypeLabel);

        fileTypeLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        fileTypeLineEdit->setObjectName("fileTypeLineEdit");
        sizePolicy5.setHeightForWidth(fileTypeLineEdit->sizePolicy().hasHeightForWidth());
        fileTypeLineEdit->setSizePolicy(sizePolicy5);
        fileTypeLineEdit->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, fileTypeLineEdit);

        filePathLineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        filePathLineEdit->setObjectName("filePathLineEdit");
        sizePolicy5.setHeightForWidth(filePathLineEdit->sizePolicy().hasHeightForWidth());
        filePathLineEdit->setSizePolicy(sizePolicy5);
        filePathLineEdit->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, filePathLineEdit);

        filePathLabel = new QLabel(scrollAreaWidgetContents_4);
        filePathLabel->setObjectName("filePathLabel");
        sizePolicy4.setHeightForWidth(filePathLabel->sizePolicy().hasHeightForWidth());
        filePathLabel->setSizePolicy(sizePolicy4);
        filePathLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, filePathLabel);

        fileInfoScrollArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_5->addWidget(fileInfoScrollArea);

        OptionsLabel = new QLabel(centralwidget);
        OptionsLabel->setObjectName("OptionsLabel");
        sizePolicy.setHeightForWidth(OptionsLabel->sizePolicy().hasHeightForWidth());
        OptionsLabel->setSizePolicy(sizePolicy);
        OptionsLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        OptionsLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(OptionsLabel);

        OptionsScrollArea = new QScrollArea(centralwidget);
        OptionsScrollArea->setObjectName("OptionsScrollArea");
        sizePolicy3.setHeightForWidth(OptionsScrollArea->sizePolicy().hasHeightForWidth());
        OptionsScrollArea->setSizePolicy(sizePolicy3);
        OptionsScrollArea->setMaximumSize(QSize(16777215, 16777215));
        OptionsScrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        OptionsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 155, 124));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        autoPlayCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        autoPlayCheckBox->setObjectName("autoPlayCheckBox");
        sizePolicy.setHeightForWidth(autoPlayCheckBox->sizePolicy().hasHeightForWidth());
        autoPlayCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(autoPlayCheckBox);

        shufflePlayCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        shufflePlayCheckBox->setObjectName("shufflePlayCheckBox");
        sizePolicy.setHeightForWidth(shufflePlayCheckBox->sizePolicy().hasHeightForWidth());
        shufflePlayCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(shufflePlayCheckBox);

        loopQueveCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        loopQueveCheckBox->setObjectName("loopQueveCheckBox");
        sizePolicy.setHeightForWidth(loopQueveCheckBox->sizePolicy().hasHeightForWidth());
        loopQueveCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(loopQueveCheckBox);

        loopFileCheckBox = new QCheckBox(scrollAreaWidgetContents_3);
        loopFileCheckBox->setObjectName("loopFileCheckBox");
        sizePolicy.setHeightForWidth(loopFileCheckBox->sizePolicy().hasHeightForWidth());
        loopFileCheckBox->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(loopFileCheckBox);

        OptionsScrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_5->addWidget(OptionsScrollArea);


        horizontalLayout_13->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        volumeLabel = new QLabel(centralwidget);
        volumeLabel->setObjectName("volumeLabel");
        sizePolicy.setHeightForWidth(volumeLabel->sizePolicy().hasHeightForWidth());
        volumeLabel->setSizePolicy(sizePolicy);
        volumeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(volumeLabel);

        volumeVerticalSlider = new QSlider(centralwidget);
        volumeVerticalSlider->setObjectName("volumeVerticalSlider");
        sizePolicy3.setHeightForWidth(volumeVerticalSlider->sizePolicy().hasHeightForWidth());
        volumeVerticalSlider->setSizePolicy(sizePolicy3);
        volumeVerticalSlider->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        volumeVerticalSlider->setMaximum(100);
        volumeVerticalSlider->setValue(50);
        volumeVerticalSlider->setSliderPosition(50);
        volumeVerticalSlider->setTracking(true);
        volumeVerticalSlider->setOrientation(Qt::Orientation::Vertical);

        verticalLayout_2->addWidget(volumeVerticalSlider);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(pushButton_5);


        horizontalLayout_13->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        currentPlayingFileLabel = new QLabel(centralwidget);
        currentPlayingFileLabel->setObjectName("currentPlayingFileLabel");
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


        verticalLayout->addLayout(horizontalLayout_4);

        audioProgressBarHorizontalSlider = new QSlider(centralwidget);
        audioProgressBarHorizontalSlider->setObjectName("audioProgressBarHorizontalSlider");
        sizePolicy1.setHeightForWidth(audioProgressBarHorizontalSlider->sizePolicy().hasHeightForWidth());
        audioProgressBarHorizontalSlider->setSizePolicy(sizePolicy1);
        audioProgressBarHorizontalSlider->setMaximum(99);
        audioProgressBarHorizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(audioProgressBarHorizontalSlider);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        progressLabel = new QLabel(centralwidget);
        progressLabel->setObjectName("progressLabel");
        sizePolicy5.setHeightForWidth(progressLabel->sizePolicy().hasHeightForWidth());
        progressLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_17->addWidget(progressLabel);

        durationLabel = new QLabel(centralwidget);
        durationLabel->setObjectName("durationLabel");
        sizePolicy5.setHeightForWidth(durationLabel->sizePolicy().hasHeightForWidth());
        durationLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_17->addWidget(durationLabel);


        horizontalLayout_18->addLayout(horizontalLayout_17);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        previousFilePushButton = new QPushButton(centralwidget);
        previousFilePushButton->setObjectName("previousFilePushButton");
        sizePolicy5.setHeightForWidth(previousFilePushButton->sizePolicy().hasHeightForWidth());
        previousFilePushButton->setSizePolicy(sizePolicy5);

        horizontalLayout_19->addWidget(previousFilePushButton);

        pauseResumePushButton = new QPushButton(centralwidget);
        pauseResumePushButton->setObjectName("pauseResumePushButton");
        sizePolicy5.setHeightForWidth(pauseResumePushButton->sizePolicy().hasHeightForWidth());
        pauseResumePushButton->setSizePolicy(sizePolicy5);

        horizontalLayout_19->addWidget(pauseResumePushButton);

        nextFilePushButton = new QPushButton(centralwidget);
        nextFilePushButton->setObjectName("nextFilePushButton");
        sizePolicy5.setHeightForWidth(nextFilePushButton->sizePolicy().hasHeightForWidth());
        nextFilePushButton->setSizePolicy(sizePolicy5);

        horizontalLayout_19->addWidget(nextFilePushButton);


        horizontalLayout->addLayout(horizontalLayout_19);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 846, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


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
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "Path", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(allSongs), QCoreApplication::translate("MainWindow", "All Files", nullptr));
        queveLabel->setText(QCoreApplication::translate("MainWindow", "queve", nullptr));
        fileInfoLabel->setText(QCoreApplication::translate("MainWindow", "File Info", nullptr));
        fileNameLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        fileAlbumLabel->setText(QCoreApplication::translate("MainWindow", "Album:", nullptr));
        fileAutorLabel->setText(QCoreApplication::translate("MainWindow", "Autor:", nullptr));
        fileDurationLabel->setText(QCoreApplication::translate("MainWindow", "Length:", nullptr));
        fileSizeLabel->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        fileTypeLabel->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        filePathLabel->setText(QCoreApplication::translate("MainWindow", "Path:", nullptr));
        OptionsLabel->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        autoPlayCheckBox->setText(QCoreApplication::translate("MainWindow", "Auto Play", nullptr));
        shufflePlayCheckBox->setText(QCoreApplication::translate("MainWindow", "Shuffle Play", nullptr));
        loopQueveCheckBox->setText(QCoreApplication::translate("MainWindow", "Loop Queve", nullptr));
        loopFileCheckBox->setText(QCoreApplication::translate("MainWindow", "Loop File", nullptr));
        volumeLabel->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "output", nullptr));
        currentPlayingFileLabel->setText(QCoreApplication::translate("MainWindow", "Now Playing:", nullptr));
        progressLabel->setText(QCoreApplication::translate("MainWindow", "progressLabel", nullptr));
        durationLabel->setText(QCoreApplication::translate("MainWindow", "durationLabel", nullptr));
        previousFilePushButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pauseResumePushButton->setText(QCoreApplication::translate("MainWindow", "play/pause", nullptr));
        nextFilePushButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
