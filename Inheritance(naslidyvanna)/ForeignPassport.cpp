#include "ForeignPassport.h"
#include "Passport.h"

ForeignPassport::ForeignPassport()
{
	visa = { };
}

ForeignPassport::ForeignPassport(std::string name, std::string surname, Date birthday, std::string wereBornPlace, Date dateGivedPasport, std::string gavePasportName, std::vector<Visa> visa) 
	:Passport(name, surname, birthday, wereBornPlace, dateGivedPasport, gavePasportName)
{
	this->visa = visa;
}

void ForeignPassport::showInfo() const
{
    std::cout << "\nSurname\t\t" << getSurname() <<
        "\nName\t\t" << getName() <<
        "\nNationality\t" << getWereBornPlace() <<
        "\nDate of birth\t" << getBirthday() <<
        "\nPasport was given by\t" << getGavePasportName() <<
        "\nserial\t\t" << getSerial() <<
        "\nnumber\t\t" << getNumber() << "\n";
}
