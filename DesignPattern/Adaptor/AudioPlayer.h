#pragma once
#include "MediaPlayer.h"
#include "MediaAdaptor.h"

class AudioPlayer : public MediaPlayer{
public:
    void play(int mediaType) override;
};