#include "Taxi.h"

class LocalTaxi : public Taxi
{
private:
	string localTxReg;
public:
	LocalTaxi();
	LocalTaxi(int basicPrice, int kilometers, bool petFriendly, bool smoking, string localTxReg);
	void checkRegNumber(); //check if local taxi registration number is valid
	virtual void printTaxi();
	virtual double calculatePrice() const override;
};

