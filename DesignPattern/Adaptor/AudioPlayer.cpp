//
// Created by Rowenci on 2022/11/19.
//

#include "AudioPlayer.h"
#include <iostream>

using namespace std;
void AudioPlayer::play(int mediaType) {
    switch (mediaType) {
        case 0:{
            cout << "playing mp3" << endl;
            break;
        }
        case 1:{
            MediaAdaptor* mediaAdaptor = new MediaAdaptor(1);
            mediaAdaptor->play(1);
            break;
        }
        case 2:{
            MediaAdaptor* mediaAdaptor = new MediaAdaptor(2);
            mediaAdaptor->play(2);
            break;
        }
    }
}
