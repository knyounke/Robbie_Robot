#ifndef __BATTERY_H
#define ___BATTERY 2017

#include "part.h"

class Battery : public Part
{
    private:
	 double energy;
    	 double maxPower;

    
    public:
	Battery() {};

 	double getEnergy();
   	double getMaxPower();
    	void setEnergy( double _energy);
    	void setMaxPower(double _maxPower);
    

    
};




#endif
