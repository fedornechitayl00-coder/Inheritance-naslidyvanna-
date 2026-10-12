#pragma once
#include <vector>
#include "Passport.h"
#include "Visa.h"
#include <string>

class ForeignPassport :
    public Passport
{
private:
    std::vector<Visa> visa;
public:
    ForeignPassport();
    ForeignPassport(int serial, int number, std::string name, std::string surname, Date birthday,
        std::string wereBornPlace, Date dateGivedPasport, std::string gavePasportName,
        std::vector<Visa> visa);

    void showInfo() const;
};

