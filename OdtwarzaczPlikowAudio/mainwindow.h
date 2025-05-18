#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filemanagerwindow.h"

#include <QMainWindow>
#include <QTreeWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_libraryEditButton_clicked();

private:
    FileManagerWindow *fmw = nullptr;
    FileManager fm;

    void updateLibraryTreeWidget();
    void addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(QString path, QTreeWidgetItem *item);
    bool inDirectoryAreAudioFiles(const QString path, const QStringList &fileFilters);

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
