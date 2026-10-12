#include "PaidLesson.h"

PaidLesson::PaidLesson()
{
    //Lesson() def constructor
    price = 0.0f;
#ifdef DEBUG
    std::cout << "\n\033[31mcreated standart inhereted(derived) class paidLesson\033[0m\t" << topic << std::endl;
#endif
}

PaidLesson::PaidLesson(std::string topic, std::string description, std::string homework, float price):Lesson(topic, description, homework)
{
    //Lesson() def constructor
    //this->topic = topic;
    //this->description = description;
    //setHomework(homework);
    this->price = price;
#ifdef DEBUG
    std::cout << "\n\033[31mcreated inhereted(derived) class paidLesson\033[0m\t" << topic << std::endl;
#endif
}

PaidLesson::~PaidLesson()
{
#ifdef DEBUG
    std::cout << "\n\033[31mdestroyed inhereted(derived) class paidLesson\033[0m\t" << topic << std::endl;
#endif
}

void PaidLesson::setPrice(float price)
{
    this->price = price;
}

float PaidLesson::getPrice() const
{
    return price;
}

void PaidLesson::showInfo() const
{
Lesson::showInfo();
    std::cout << "\033[0m\nPrice:\t\t\033[33m" << price << "\033[0m\n";
}
