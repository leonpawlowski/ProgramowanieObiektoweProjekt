#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QString>
#include <QStringList>

class FileManager
{
public:
    explicit FileManager(const QString &filePath);

    QStringList loadPaths() const;
    void savePath(const QString &path);
    void overWritePaths(const QStringList paths);

private:
    QString filePath;
};

#endif // FILEMANAGER_H
