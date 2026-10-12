#pragma once
#include "Item.h"

class MusicCD :
    public Item
{
protected:
    int duration;
public:
    MusicCD();
    MusicCD(std::string name, std::string creator, int releaseYear, float price, int duration);

    void setDuration(int duration);
    int getDuration() const;

    void showInfo() const;
};

