#include <iostream>
//#include "Lesson.h"
//#include "PaidLesson.h"
//#include "MusicCD.h"
//#include "MovieDVD.h"
#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"

int counter = 0;
int counterNumber = 0;

int main()
{
	Passport ukrainian(counter, counterNumber, "Kamilla", "Fedorova", Date(28, 9, 2009), "Kharkiv", Date(8, 1, 2024), "Henna", "Mihaylivna", "Amosova 1");
	
	
	
	
	
	//Lesson english;
	//Lesson programming("C++", "Inheritance", "create basic class");

	//english.showInfo();
	//programming.showInfo();

	//PaidLesson spanish;
	//PaidLesson math("preparetion for NMT", "logarifms", "tasks : 4.8; 4.19; 4.29", 1560.0);

	//std::cout << "\n____________________________________\n";

	//spanish.showInfo();
	//math.showInfo();

	//MusicCD TV_Girl("My girlfriend", "TV Girl", 2013, 28, 240);
	//TV_Girl.showInfo();

	//MovieDVD Home_for_peculiar_children("home for peculiar children", "Tim Berton", 2016, 800, 127, "fantasy", "USA", "Eysa Batterfild, Evs Green, Samuel Jacson, Ellison Jenny, Cris Daud");
	//Home_for_peculiar_children.showInfo();

	return 0;
}