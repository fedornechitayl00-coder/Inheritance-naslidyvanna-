#include <iostream>
//#include "Lesson.h"
//#include "PaidLesson.h"
//#include "MusicCD.h"
//#include "MovieDVD.h"
#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"


int main()
{
	Passport ukrainian("Kamilla", "Fedorova", Date(28, 9, 2009), "Ukraine", Date(8, 1, 2024), "Authority 2881", "Mihaylivna", "Amosova 1");
	
	ukrainian.showInfo();
	
	std::vector<Visa> visas;
	visas.push_back(Visa("Canada", Date(12, 9, 2023), Date(12, 9, 2027)));
	visas.push_back(Visa("Japan", Date(7, 12, 2025), Date(7, 12, 2029)));

	ForeignPassport ukrainianForeignPassp("Kamilla", "Fedorova", Date(28, 9, 2009), "Kharkiv", Date(8, 1, 2024), "Authority 8890", visas);
	
	ukrainianForeignPassp.showInfo();

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