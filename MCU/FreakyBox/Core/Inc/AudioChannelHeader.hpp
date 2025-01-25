#include "cppMainHeader.hpp"
#include <string>

#ifndef AUDIOCHANNEL_H
#define AUDIOCHANNEL_H

class AudioChannel
{
    private:
        float               _volume;
        const std::string   _name;
    public:
        AudioChannel();
        ~AudioChannel();
        AudioChannel(float volume);
        AudioChannel(float volume, const std::string &name);

        void    setVolume(float volume);
        float   getVolume(void);
};


#endif
