#include "Item.h"

Item::Item()
{
    name = "undefined";
    creator = "undefined";
    releaseYear = 0;
    price = 0.0f;
}

Item::Item(std::string name, std::string creator, int releaseYear, float price)
{
    this->name = name;
    this->creator = creator;
    this->releaseYear = releaseYear;
    this->price = price;
}

void Item::setName(std::string name)
{
    this->name = name;
}

std::string Item::getName() const
{
    return name;
}

void Item::setPrice(float price)
{
    this->price = price;
}

float Item::getPrice() const
{
    return price;
}

void Item::showInfo() const
{
    std::cout << "\nName:\t\t" << name <<
        "\nCreator:\t" << creator <<
        "\nYear of release:" << releaseYear <<
        "\nPrice:\t\t" << price << std::endl;
}
