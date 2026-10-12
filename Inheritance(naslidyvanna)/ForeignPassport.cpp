#include "ForeignPassport.h"
#include "Passport.h"
#include <algorithm>

ForeignPassport::ForeignPassport()
{
	visa = { };
}

ForeignPassport::ForeignPassport(std::string name, std::string surname, Date birthday, std::string wereBornPlace, Date dateGivedPasport, std::string gavePasportName, std::vector<Visa>& visa)
	:Passport(name, surname, birthday, wereBornPlace, dateGivedPasport, gavePasportName)
{
    this->visa = visa;
}

void ForeignPassport::addVisa(const Visa& newVisa)
{
    visa.push_back(newVisa);
}


void ForeignPassport::showInfo() const
{
    std::cout << "\nSurname\t\t\t" << getSurname() <<
        "\nName\t\t\t" << getName() <<
        "\nWere born in\t" << getWereBornPlace() <<
        "\nDate of birth\t" << getBirthday() <<
        "\nPasport was given by\t" << getGavePasportName() <<
        "\nserial\t\t\t" << getSerial() <<
        "\nnumber\t\t\t" << getNumber() << "\n";

    if (!visa.empty()) {
        for (const auto& v : visa) {
            v.showInfo();
        }
    }
}
