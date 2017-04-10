#include "arm.h"
#include "part.h"
#include "controller.h"



 void Arm::setPowerConsumptionRate(double pcr)
 {
    _pcr = pcr;

  }

 double Arm::getPowerConsumptionRate()
  {
    return _pcr;

  }

 double Arm::powerConsumed(int speed)
  {
    double powerConsumed;
    powerConsumed = speed * _pcr;
    return powerConsumed;
   }

void save_arm()
{


}
