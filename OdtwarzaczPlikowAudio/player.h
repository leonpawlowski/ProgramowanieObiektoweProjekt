#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QSlider>


class Player : QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = nullptr);

    void play(const QString &filePath);
    void setVolume(int volume);
    void setProgressSlider(QSlider *slider);


private:
    QMediaPlayer *player;
};

#endif // PLAYER_H
