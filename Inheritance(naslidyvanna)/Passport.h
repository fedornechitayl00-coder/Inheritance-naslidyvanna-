#pragma once
#include <iostream>
#include <string>
#include "Date.h"

class Passport
{
protected:
	static int serial;
	static int number;
	std::string name;
	std::string surname;
	Date birthday;
	std::string wereBornPlace;
	Date dateGivedPasport;
	std::string gavePasportName;
private:
	std::string nameByFather;
	std::string residenseRegistr;
public:
	Passport();
	Passport(std::string name, std::string surname, Date birthday,
		std::string wereBornPlace, Date dateGivedPasport, std::string gavePasportName,
		std::string nameByFather, std::string residenseRegistr);
	Passport(std::string name, std::string surname, Date birthday,
		std::string wereBornPlace, Date dateGivedPasport, std::string gavePasportName);
	~Passport();

	int getSerial() const;
	int getNumber() const;
	std::string getName() const;
	std::string getSurname() const;
	Date getBirthday() const;
	std::string getWereBornPlace() const;
	Date getDateGivedPasport() const;
	std::string getGavePasportName() const;
	std::string getNameByFather() const;
	std::string getResidenseRegistr() const;

	void showInfo() const;
};

