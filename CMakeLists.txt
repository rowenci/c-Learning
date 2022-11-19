cmake_minimum_required(VERSION 3.23)
project(c_Learning)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_Learning
        DesignPattern/Adaptor/MediaPlayer.h
        DesignPattern/Adaptor/AdvancedMediaPlayer.h
        DesignPattern/Adaptor/AudioPlayer.cpp DesignPattern/Adaptor/AudioPlayer.h DesignPattern/Adaptor/VLCPlayer.cpp DesignPattern/Adaptor/VLCPlayer.h DesignPattern/Adaptor/MP4Player.cpp DesignPattern/Adaptor/MP4Player.h DesignPattern/Adaptor/AdaptorDemo.cpp DesignPattern/Adaptor/MediaAdaptor.cpp DesignPattern/Adaptor/MediaAdaptor.h)