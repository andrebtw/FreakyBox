#include "cppMainHeader.hpp"
#include "MyMCUHeader.hpp"


MyMCU::MyMCU(uint16_t bpm) : _bpm(bpm)
{

}

MyMCU::MyMCU(uint16_t bpm, float volume) : _bpm(bpm), _volume(volume)
{
    this->_channels.emplace_back(1.0);
}

MyMCU::MyMCU() : _bpm(120), _volume(1.0)
{

}

MyMCU::~MyMCU()
{

}

/* Getters */
uint16_t MyMCU::getBpm(void)
{
    return (this->_bpm);
}

float MyMCU::getVolume(void)
{
    return (this->_volume);
}

/*Setters*/
void MyMCU::setBpm(uint16_t bpm)
{
    this->_bpm = bpm;
}


/* Other */
void mcuMain(void)
{
    while (1)
    {
        if (callback_return == DMA_STARTED || callback_return == DMA_HALF_COMPLETED)
	    {
	  	    audio_buffer_ptr = &audio_buffer[0];
	  	    callback_return = DMA_FILLING_BUFFER;
	    }
	    else if (callback_return == DMA_COMPLETED)
	    {
	  	    audio_buffer_ptr = &audio_buffer[BUFFER_SIZE/2];
	  	    callback_return = DMA_FILLING_BUFFER;
	    }
    }
}
