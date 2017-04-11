#include "locomotor.h"


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

   	void Locomotor::setPowerConsumptionRate(double _pcr)
	{
	  pcr = _pcr;
	}

        double Locomotor::powerConsumed(int speed)
	{
	   double powerConsumed;
	   powerConsumed = pcr * speed;
           return powerConsumed;
	}

