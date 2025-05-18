#include "filemanager.h"

#include <QFile>
#include <QTextStream>

FileManager::FileManager(const QString &filePath) : filePath(filePath) {}

QStringList FileManager::loadPaths() const {
    QStringList paths;
    QFile file(filePath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        while(!in.atEnd()){
            QString line = in.readLine();
            if(!line.isEmpty())
                paths << line;
        }
        file.close();
    }
    return paths;
}

void FileManager::savePath(const QString &path){
    QFile file(filePath);
    if(file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out(&file);
        out << path <<'\n';
        file.close();
    }
}

 void FileManager::overWritePaths(const QStringList paths){
    QFile file(filePath);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        for(const QString &path : paths){
            out << path << '\n';
        }
        file.close();
    }
}
