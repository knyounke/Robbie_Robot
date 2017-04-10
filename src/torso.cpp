#include "part.h"
#include "torso.h"



using namespace std;



	    int Torso::getBatteryCompartments()
		{
		   return batteryCompartments;
		};
	    int Torso::getArmSockets()
		{
		   return armSockets;
		}
	  
	    void Torso::setBatteryCompartments(int _batteryCompartments)
		{
			batteryCompartments = _batteryCompartments;
		}
	    void Torso::setArmSockets(int _armSockets)
		{

		    armSockets = _armSockets;
		}
	void Torso::save_torso()
	{

	}
