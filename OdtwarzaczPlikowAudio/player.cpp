#include "player.h"
#include <QUrl>

Player::Player(QObject *parent) : QObject(parent)
{
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
}

Player::~Player()
{
    delete player;
    delete audioOutput;
}

void Player::play(const QString &filePath){
    player->setSource(QUrl::fromLocalFile(filePath));
    player->play();
}

void Player::stop(){
    player->stop();
}

void Player::pauseResume(){
    if(player->playbackState() == QMediaPlayer::PlayingState)
        player->pause();
    else if(player->playbackState() == QMediaPlayer::PausedState)
        player->play();
}
