#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "filemanagerwindow.h"
#include "filemanager.h"

#include <QDir>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDirIterator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , fm("paths.txt")
{
    ui->setupUi(this);

    updateLibraryTreeWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateLibraryTreeWidget(){
    QStringList paths = fm.loadPaths();
    ui->libraryTreeWidget->clear();
    for(const QString &path : paths){
        QTreeWidgetItem *libraryItem = new QTreeWidgetItem(ui->libraryTreeWidget);
        libraryItem->setText(0, path);

        addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(path, libraryItem);
    }
}

void MainWindow::addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(QString path, QTreeWidgetItem *libraryItem){
    QDir directory(path);
    QStringList fileFilters;
    fileFilters << "*.mp3" << "*.wav" << "*.flac";
    QFileInfoList audioFiles = directory.entryInfoList(fileFilters, QDir::Files);
    QDirIterator directoryIterator(path, QDir::Dirs | QDir::NoDotAndDotDot);

    while(directoryIterator.hasNext()){
        directoryIterator.next();

        if(inDirectoryAreAudioFiles(path+"/"+directoryIterator.fileName(), fileFilters)){
            QTreeWidgetItem *folderItem = new QTreeWidgetItem(libraryItem);
            folderItem->setText(0, directoryIterator.fileName());
            folderItem->setText(1, "Folder");
            addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(path+"/"+directoryIterator.fileName(), folderItem);
        }
    }

    for(const QFileInfo &fileInfo : audioFiles){
        QTreeWidgetItem *fileItem = new QTreeWidgetItem(libraryItem);
        fileItem->setText(0, fileInfo.fileName());
        fileItem->setText(1, "File");
        QTreeWidgetItem *allSongsFileItem = new QTreeWidgetItem(ui->allFilesTreeWidget);
        allSongsFileItem->setText(0, fileInfo.fileName());
        allSongsFileItem->setText(1, path);
    }
}

bool MainWindow::inDirectoryAreAudioFiles(const QString path, const QStringList &fileFilters){

    QDir directory(path);
    QFileInfoList folderAudioFiles = directory.entryInfoList(fileFilters, QDir::Files);
    if(!folderAudioFiles.isEmpty())
        return true;
    QDirIterator directoryIterator(path, QDir::Dirs | QDir::NoDotAndDotDot);
    bool areThereAnyFiles = false;
    while(directoryIterator.hasNext()){
        directoryIterator.next();
        areThereAnyFiles = inDirectoryAreAudioFiles(path+"/"+directoryIterator.fileName(), fileFilters);
        if(areThereAnyFiles)
            return true;
    }
    return false;
}

void MainWindow::on_libraryEditButton_clicked()
{
    if(!fmw)
        fmw = new FileManagerWindow(nullptr);
    fmw->exec();
    updateLibraryTreeWidget();
}

