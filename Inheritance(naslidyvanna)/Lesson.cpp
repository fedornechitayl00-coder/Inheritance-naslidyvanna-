#include "Lesson.h"

Lesson::Lesson()
{
	topic = "undefined";
	description = "undefined";
	homework = "undefined";
#ifdef DEBUG
	std::cout << "\n\033[31mbase class lesson\033[0m\t" << topic << std::endl;
#endif
}

Lesson::Lesson(std::string topic, std::string description, std::string homework)
{
	this->topic = topic;
	this->description = description;
	this->homework = homework;
#ifdef DEBUG
	std::cout << "\n\033[31mbase class lesson\033[0m\t" << topic << std::endl;
#endif
}

Lesson::~Lesson()
{
#ifdef DEBUG
	std::cout << "\n\033[31mdestroyed base class lesson\033[0m\t" << topic << std::endl;
#endif
}

void Lesson::setTopic(std::string topic)
{
	this->topic = topic;
}

void Lesson::setDescription(std::string description)
{
	this->description = description;
}

void Lesson::setHomework(std::string homework)
{
	this->homework = homework;
}

std::string Lesson::getTopic() const
{
	return topic;
}

std::string Lesson::getDescription() const
{
	return description;
}

std::string Lesson::getHomework() const
{
	return homework;
}

void Lesson::showInfo() const
{
	std::cout << "\nTopic:\t\t\033[33m" << topic <<
		"\033[0m\nDescription:\t\033[33m" << description <<
		"\033[0m\nHomework:\t\033[33m" << homework << "\033[0m";
}
