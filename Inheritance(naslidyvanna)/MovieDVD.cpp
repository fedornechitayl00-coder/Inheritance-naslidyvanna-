#include "MovieDVD.h"

MovieDVD::MovieDVD()
{
    genre = "undefined";
}

MovieDVD::MovieDVD(std::string name, std::string creator, int releaseYear, float price, int duration, std::string genre, std::string country, std::string actors)
    :MusicCD(name, creator, releaseYear, price, duration)
{
    this->country = country;
    this->actors = actors;
    this->genre = genre;
}

float MovieDVD::getPrice() const
{
    if (genre == "comedy") { return price * 0.9; }
    else if (genre == "drama") { return price * 0.85; }
    else if (genre == "serial") { return price * 0.8; }
    else { return price; }
}

void MovieDVD::setGenre(std::string genre)
{
    this->genre = genre;
}

std::string MovieDVD::getGenre() const
{
    return genre;
}

void MovieDVD::setCountry(std::string country)
{
    this->country = country;
}

std::string MovieDVD::getCountry() const
{
    return country;
}

void MovieDVD::setActors(std::string actors)
{
    this->actors = actors;
}

std::string MovieDVD::getActors() const
{
    return actors;
}

void MovieDVD::showInfo() const
{
    std::cout << "\n\tMovieDVD\n";
    Item::showInfo();
    std::cout << "Genre:\t" << genre <<
        "\nDuration:\t" << duration <<
        "\nCountry:\t" << country <<
        "\nFulll price:\t" << getPrice() << std::endl;
}
