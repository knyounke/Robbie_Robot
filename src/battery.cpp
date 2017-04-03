#include "part.h"
#include "battery.h"


using namespace std;



 	double Battery::getEnergy()
	{
	  return energy;
	}

   	double Battery::getMaxPower()
	{
	  return maxPower;
	}

    	void Battery::setEnergy( double _energy)
	{

	  energy = _energy;
	}
    	void Battery::setMaxPower(double _maxPower)
	{

	 maxPower = _maxPower;
	}
    
