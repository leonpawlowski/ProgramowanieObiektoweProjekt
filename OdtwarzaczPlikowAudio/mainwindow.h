#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filemanagerwindow.h"
#include "player.h"

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
    void on_libraryTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_allFilesTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_pauseResumePushButton_clicked();

private:

    void updateLibraryTreeWidget();
    void addingItemsFromPathToLibraryTreeWidgetAndAllSongsTreeWidget(const QString path, QTreeWidgetItem *item);
    bool inDirectoryAreAudioFiles(const QString path, const QStringList &fileFilters);

    FileManagerWindow *fmw = nullptr;
    FileManager fm;
    Player *player;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
