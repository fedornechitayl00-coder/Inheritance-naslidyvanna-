#pragma once
#include <string>
#include <iostream>
#include "Date.h"

class Visa
{
protected:
	std::string countryName;
	Date dateOfOpeningVisa;
	Date dateOfClosingVisa;
public:
	Visa();
	Visa(std::string countryName, Date dateOfOpeningVisa, Date dateOfClosingVisa);

	std::string getCountryName() const;
	Date getDateOfOpeningVisa() const;
	Date getDateOfClosingVisa() const;

	void showInfo() const;
};

