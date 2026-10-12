#pragma once
#include <iostream>
#include <string>

class Item
{
protected:
	std::string name;
	std::string creator;
	int releaseYear;
	float price;
public:
	Item();
	Item(std::string name, std::string creator, int releaseYear, float price);

	void setName(std::string name);
	std::string getName() const;
	void setPrice(float price);
	float getPrice() const;

	void showInfo() const;
};

