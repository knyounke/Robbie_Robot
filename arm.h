#ifndef ___ARM_H
#define ___ARM_H 2017
#include "part.h"



using namespace std;

class Arm : public Part
{
    private:
      double _pcr; //power consumption rate
    
    public:
       Arm() { }
       void setPowerConsumptionRate(double pcr);
       double getPowerConsumptionRate();
       double powerConsumed(int speed);
};
    
    
#endif
    
