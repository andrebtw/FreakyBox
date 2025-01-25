#include "cppMainHeader.hpp"
#include "AudioChannelHeader.hpp"
#include <string>

AudioChannel::AudioChannel() : _volume(1.0)
{
}

AudioChannel::AudioChannel(float volume) : _volume(volume)
{
}

AudioChannel::AudioChannel(float volume, const std::string &name) : _volume(volume), _name(name)
{
}



AudioChannel::~AudioChannel()
{
}
