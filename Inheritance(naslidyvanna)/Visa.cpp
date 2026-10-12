#include "Visa.h"

Visa::Visa()
{
    countryName = "undefined";
    dateOfOpeningVisa = Date(0, 0, 0);
    dateOfClosingVisa = Date(0, 0, 0);
}

Visa::Visa(std::string countryName, Date dateOfOpeningVisa, Date dateOfClosingVisa)
{
    this->countryName = countryName;
    this->dateOfOpeningVisa = dateOfOpeningVisa;
    this->dateOfClosingVisa = dateOfClosingVisa;
}

std::string Visa::getCountryName() const
{
    return countryName;
}

Date Visa::getDateOfOpeningVisa() const
{
    return dateOfOpeningVisa;
}

Date Visa::getDateOfClosingVisa() const
{
    return dateOfClosingVisa;
}

void Visa::showInfo() const
{
    std::cout << "\n\tVISA TO " << getCountryName() <<
        "\nDate of opening visa\t" << getDateOfOpeningVisa() <<
        "\nExpiring date\t" << getDateOfClosingVisa() << "\n";
}
