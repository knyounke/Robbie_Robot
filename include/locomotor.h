#ifndef __LOCOMOTOR_H
#define ___LOCOMOTOR 2017

#include "part.h"


class Locomotor : public Part
{
   private:

    double maxSpeed;
    double pcr; //power consumption rate

    public:
       Locomotor() {}
   	double getMaxSpeed();
    	double getPowerConsumtionRate();
   	void setMaxSpeed(double _maxSpeed);
   	void setPowerConsumptionRate(double _pcr);
        double powerConsumed(int speed);

};


#endif
