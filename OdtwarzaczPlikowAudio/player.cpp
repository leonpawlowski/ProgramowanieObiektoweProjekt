#include "player.h"
#include <QUrl>
#include <QFileInfo>

Player::Player(QLineEdit *lineEdit, QObject *parent) : QObject(parent)
{
    mediaPlayer = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    mediaPlayer->setAudioOutput(audioOutput);
    currentPlayingFileLineEdit = lineEdit;
}

Player::~Player()
{
    delete mediaPlayer;
    delete audioOutput;
}

void Player::play(const QString filePath)
{
    QFileInfo currentFile(filePath);
    currentPlayingFileLineEdit->setText(currentFile.fileName());
    mediaPlayer->setSource(QUrl::fromLocalFile(filePath));
    mediaPlayer->play();
}

void Player::stop()
{
    mediaPlayer->stop();
}

void Player::pauseResume()
{
    if(mediaPlayer->playbackState() == QMediaPlayer::PlayingState)
        mediaPlayer->pause();
    else if(mediaPlayer->playbackState() == QMediaPlayer::PausedState)
        mediaPlayer->play();
    else
        mediaPlayer->play();
}

void Player::configPlayer(QSlider *progressSlider, QSlider *volumeSlider, QLabel *progressLabel, QLabel *durationLabel, QLabel *volumeLabel){
    volumeSlider->setValue(static_cast<int>(audioOutput->volume()*100));
    volumeLabel->setText("volume " + QString::number(volumeSlider->value()) + "%");
    progressLabel->setText("0:0");
    durationLabel->setText("/ 0:0");

    connect(mediaPlayer, &QMediaPlayer::durationChanged, this, [progressSlider, durationLabel](qint64 duration){
        progressSlider->setMaximum(static_cast<int>(duration));
        if((duration/1000)%60<10)
            durationLabel->setText("/  " + QString::number(duration/60000) + ":0" + QString::number((duration/1000)%60));
        else
            durationLabel->setText("/  " + QString::number(duration/60000) + ":" + QString::number((duration/1000)%60));
    });

    connect(progressSlider, &QSlider::sliderPressed, this, [this](){
        userIsMovingSlider = true;
    });

    connect(progressSlider, &QSlider::sliderReleased, this, [this, progressSlider]{
        userIsMovingSlider = false;
        mediaPlayer->setPosition(progressSlider->value());
    });

    connect(mediaPlayer, &QMediaPlayer::positionChanged, this, [this, progressSlider, progressLabel](qint64 position){
        if(!userIsMovingSlider)
            progressSlider->setValue(static_cast<int>(position));
        if((position/1000)%60<10)
            progressLabel->setText(QString::number(position/60000) + ":0" + QString::number((position/1000)%60));
        else
            progressLabel->setText(QString::number(position/60000) + ":" + QString::number((position/1000)%60));
    });

    connect(volumeSlider, &QSlider::valueChanged, this, [this, volumeLabel](int volume){
        audioOutput->setVolume(static_cast<float>(volume)/100.0);
        volumeLabel->setText("Volume " + QString::number(volume) + "%");
    });
}

QMediaPlayer* Player::getMediaPlayer(){
    return mediaPlayer;
}
