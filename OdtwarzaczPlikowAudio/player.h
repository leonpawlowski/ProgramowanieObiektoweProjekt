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
    ~Player();

    void play(const QString &filePath);
    void stop();
    void pauseResume();


private:
    QMediaPlayer *player;
    QAudioOutput *audioOutput;

};

#endif // PLAYER_H
