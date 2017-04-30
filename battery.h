#ifndef __BATTERY_H
#define ___BATTERY 2017
#include <string>

using namespace std;

class Battery : public Part
{
    private:
	 double energy;
    	 double maxPower;

    
    public:
	Battery(string name, string type, double price, string description ) : Part{name, type, price, description} {}
	Battery() {}

 	double getEnergy();
   	double getMaxPower();
    	void setEnergy( double _energy);
    	void setMaxPower(double _maxPower);
    

    
};




#endif
