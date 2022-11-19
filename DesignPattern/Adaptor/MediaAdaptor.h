//
// Created by Rowenci on 2022/11/19.
//

#ifndef C_LEARNING_MEDIAADAPTOR_H
#define C_LEARNING_MEDIAADAPTOR_H


#include "MediaPlayer.h"
#include "iostream"
#include "AdvancedMediaPlayer.h"
#include "VLCPlayer.h"
#include "MP4Player.h"

class MediaAdaptor : public MediaPlayer{
public:
    AdvancedMediaPlayer* advancedMediaPlayer;

    explicit MediaAdaptor(int mediaType);

    void play(int mediaType) override;
};


#endif //C_LEARNING_MEDIAADAPTOR_H
