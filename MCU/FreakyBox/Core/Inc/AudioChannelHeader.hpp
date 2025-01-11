#include "cppMainHeader.hpp"

#ifndef AUDIOCHANNEL_H
#define AUDIOCHANNEL_H

class AudioChannel
{
    private:
        float   _volume;
    public:
        AudioChannel();
        AudioChannel(float volume);
        ~AudioChannel();

        void    setVolume(float volume);
        float   getVolume(void);
};



#endif