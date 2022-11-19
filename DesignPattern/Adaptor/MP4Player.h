//
// Created by Rowenci on 2022/11/19.
//

#ifndef C_LEARNING_MP4PLAYER_H
#define C_LEARNING_MP4PLAYER_H


#include "AdvancedMediaPlayer.h"

class MP4Player : public AdvancedMediaPlayer{
    void playVLC() override;

    void playMP4() override;
};


#endif //C_LEARNING_MP4PLAYER_H
