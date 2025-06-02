#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QSlider>
#include <QLabel>
#include <QLineEdit>

class Player : QObject
{
    Q_OBJECT
    friend class PlayerQueve;
public:
    explicit Player(QLineEdit *lineEdit, QObject *parent = nullptr);
    ~Player();

    void play(const QString filePath);
    void stop();
    void pauseResume();
    int durationInMiliSeconds();
    int currentPositionInMiliSeconds();
    void configPlayer(QSlider *progressSlider, QSlider *volumeSlider, QLabel *progressLabel, QLabel *durationLabel, QLabel *volumeLabel);
    QMediaPlayer* getMediaPlayer();

private slots:


private:
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutput;
    bool userIsMovingSlider = false;
    QLineEdit *currentPlayingFileLineEdit;

};

#endif // PLAYER_H
