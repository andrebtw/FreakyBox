#include "cppMainHeader.hpp"
#include <vector>
#include <cstdint>

#ifndef MYMCU_H
#define MYMCU_H


class MyMCU
{
    private:
        uint16_t                    _bpm;
        float                       _volume;
        std::vector<AudioChannel>   _channels;
        

    public:
        MyMCU(uint16_t bpm, float volume);
        MyMCU(uint16_t bpm);
        MyMCU();
        ~MyMCU();

        void        mcuMain(void);
        uint16_t    getBpm(void);
        float       getVolume(void);
        void        setBpm(uint16_t bpm);
        void        setVolume(float volume);
};

#endif
