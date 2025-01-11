#include "cppMainHeader.hpp"
#include "AudioChannelHeader.hpp"

AudioChannel::AudioChannel() : _volume(1.0)
{
}

AudioChannel::AudioChannel(float volume) : _volume(volume)
{
}


AudioChannel::~AudioChannel()
{
}