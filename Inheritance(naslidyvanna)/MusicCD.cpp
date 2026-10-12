#include "MusicCD.h"

MusicCD::MusicCD()
{
    duration = 0;
}

MusicCD::MusicCD(std::string name, std::string creator, int releaseYear, float price, int duration) : Item(name, creator, releaseYear, price){
    this->duration = duration;
}

void MusicCD::setDuration(int duration)
{
    this->duration = duration;
}

int MusicCD::getDuration() const
{
    return duration;
}

void MusicCD::showInfo() const
{
    std::cout << "\tMusicCD\n";
    Item::showInfo();
    std::cout << "Duration:\t" << duration << std::endl;
}
