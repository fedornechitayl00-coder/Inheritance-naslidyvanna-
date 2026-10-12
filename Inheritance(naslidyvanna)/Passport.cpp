#include "Passport.h"

int Passport::serial = 0;
int Passport::number = 100000;

Passport::Passport()
{
    serial = 0;
    number = 0;
    name = "undefined";
    surname = "undefined";
    birthday = Date(0, 0, 0);
    wereBornPlace = "undefined";
    dateGivedPasport = Date(0, 0, 0);
    gavePasportName = "undefined";
    nameByFather = "undefined";
    residenseRegistr = "undefined";
}

Passport::Passport(std::string name, std::string surname, Date birthday, std::string wereBornPlace, Date dateGivedPasport, 
    std::string gavePasportName, std::string nameByFather, std::string residenseRegistr)
{
    this->name = name;
    this->surname = surname;
    this->birthday = birthday;
    this->wereBornPlace = wereBornPlace;
    this->dateGivedPasport = dateGivedPasport;
    this->gavePasportName = gavePasportName;
    this->nameByFather = nameByFather;
    this->residenseRegistr = residenseRegistr;
    this->serial++;
    this->number++;
}

Passport::Passport(std::string name, std::string surname, Date birthday, std::string wereBornPlace, Date dateGivedPasport, std::string gavePasportName)
{
    this->name = name;
    this->surname = surname;
    this->birthday = birthday;
    this->wereBornPlace = wereBornPlace;
    this->dateGivedPasport = dateGivedPasport;
    this->gavePasportName = gavePasportName;
    this->serial++;
    this->number++;
}

Passport::~Passport()
{
    std::cout << "\ndelete passport\n";
}

int Passport::getSerial() const
{
    return serial;
}

int Passport::getNumber() const
{
    return number;
}

std::string Passport::getName() const
{
    return name;
}

std::string Passport::getSurname() const
{
    return surname;
}

Date Passport::getBirthday() const
{
    return birthday;
}

std::string Passport::getWereBornPlace() const
{
    return wereBornPlace;
}

Date Passport::getDateGivedPasport() const
{
    return dateGivedPasport;
}

std::string Passport::getGavePasportName() const
{
    return gavePasportName;
}

std::string Passport::getNameByFather() const
{
    return nameByFather;
}

std::string Passport::getResidenseRegistr() const
{
    return residenseRegistr;
}

void Passport::showInfo() const
{
    std::cout << "\nSurname\t\t\t" << getSurname() <<
        "\nName\t\t\t" << getName() <<
        "\nPatronymic\t\t" << getNameByFather() <<
        "\nNationality\t\t" << getWereBornPlace() <<
        "\nDate of birth\t\t" << getBirthday() <<
        "\nResidense registration\t" << getResidenseRegistr() <<
        "\nPasport was given by\t" << getGavePasportName() <<
        "\nserial\t\t\t" << getSerial() <<
        "\nnumber\t\t\t" << getNumber() << "\n";
}
