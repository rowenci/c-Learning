//
// Created by Rowenci on 2022/11/19.
//
#include "iostream"
#include "AudioPlayer.h"

int main(){
    AudioPlayer* audioPlayer = new AudioPlayer();
    audioPlayer->play(0);
    audioPlayer->play(1);
    audioPlayer->play(2);
    return -1;
}
