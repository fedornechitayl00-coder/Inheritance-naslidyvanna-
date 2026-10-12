#pragma once
#include "MusicCD.h"

class MovieDVD :
    public MusicCD
{
protected:
    std::string genre;  //1-drama, 2-comedy, 3-serial, 4-fight
    std::string country;
    std::string actors;
public:
    MovieDVD();
    MovieDVD(std::string name, std::string creator, int releaseYear, float price, int duration, std::string genre, std::string country, std::string actors);
    
    float getPrice() const;
    void setGenre(std::string genre);
    std::string getGenre() const;
    void setCountry(std::string country);
    std::string getCountry() const;
    void setActors(std::string actors);
    std::string getActors() const;

    void showInfo() const;
};

