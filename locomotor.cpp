#include "locomotor.h"
#include "part.h"


	double Locomotor::getMaxSpeed()
	{
	  return maxSpeed;
	}

    	double Locomotor::getPowerConsumtionRate()
	{
	  return pcr;
	}

   	void Locomotor::setMaxSpeed(double _maxSpeed)
	{
	  maxSpeed = _maxSpeed;
	}

   	void setPowerConsumptionRate(double _pcr)
	{
	  pcr = _pcr;
	}

        double powerConsumed(int speed)
	{
	   double powerConsumed;
	   powerConsumed = pcr * speed;
           return powerConsumed;
	}
