//
// Created by Rowenci on 2022/11/19.
//

#ifndef C_LEARNING_VLCPLAYER_H
#define C_LEARNING_VLCPLAYER_H


#include "AdvancedMediaPlayer.h"

class VLCPlayer : public AdvancedMediaPlayer{
    void playVLC() override;

    void playMP4() override;
};


#endif //C_LEARNING_VLCPLAYER_H
