#pragma once
#include "Lesson.h"

class PaidLesson :public Lesson
{
protected:
	float price;
public:
	PaidLesson();
	PaidLesson(std::string topic, std::string description, std::string homework, float price);
	~PaidLesson();

	void setPrice(float price);
	float getPrice() const;

	void showInfo() const;
};

