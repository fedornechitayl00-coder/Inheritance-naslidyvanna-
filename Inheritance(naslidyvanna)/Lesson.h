#pragma once
#include <iostream>
#include <string>

#define DEBUG

class Lesson
{
protected:
	std::string topic;
	std::string description;
private:
	std::string homework;
public:
	Lesson();
	Lesson(std::string topic, std::string description, std::string homework);
	~Lesson();

	void setTopic(std::string topic);
	void setDescription(std::string description);
	void setHomework(std::string homework);

	std::string getTopic() const;
	std::string getDescription() const;
	std::string getHomework() const;

	void showInfo() const;
};

