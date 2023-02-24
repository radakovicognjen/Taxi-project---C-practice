#include <iostream>
#include <string>

using namespace std;

class Driver
{
protected:
	int yearsOfExperience;
	int yearBorn;
	int numberOfDrives;
	char licenceCategory;
public:
	Driver();
	Driver(int yearsOfExperience, int yearBorn, bool numberOfDrives, char licenceCategory);
	void printDriver();
	double calculateEarnings(); //calculate earning depending on (calculatePrice() from Taxi class) * numOfDrives
	void checkCategory(); //if 'B' then he is LocalTaxi, if 'D' then he is IntercityTaxi
};

