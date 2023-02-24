#include "Taxi.h"

class IntercityTaxi : public Taxi
{
private:
	int seatNumber;
	bool highwayPass;
public:
	IntercityTaxi();
	IntercityTaxi(int basicPrice, int kilometers, bool petFriendly, bool smoking, bool highwayPass, int seatNumber);
	void checkVehicle(); //bus or van depending on seatNumber
	virtual void printTaxi();
	virtual double calculatePrice() const override;
};

