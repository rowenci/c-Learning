//
// Created by Rowenci on 2022/11/19.
//

#include "MediaAdaptor.h"


MediaAdaptor::MediaAdaptor(int mediaType) {
    switch (mediaType) {
        case 1:{
            advancedMediaPlayer = new VLCPlayer();
            break;
        }
        case 2:{
            advancedMediaPlayer = new MP4Player();
            break;
        }
    }
}

void MediaAdaptor::play(int mediaType) {
    switch (mediaType) {
        case 1:{
            advancedMediaPlayer->playVLC();
            break;
        }
        case 2:{
            advancedMediaPlayer->playMP4();
            break;
        }
    }
}