#include <iostream>
#include <string>
#include "Driver.h"

using namespace std;

class Taxi
{
protected:
	int basicPrice; //price per km
	bool petFriendly; //yes or no
	bool smoking; //yes or no
	int kilometers;
	int discount;
public:
	Driver d;
	Taxi();
	Taxi(int basicPrice, int kilometers, bool petFriendly, bool smoking);
	virtual void printTaxi();
	virtual double calculatePrice() const = 0; //calculate drive price depending of kilometers and discount
};

