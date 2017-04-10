#ifndef __TORSO_H
#define ___TORSO 2017



class Torso: public Part
{
    private:
	int batteryCompartments;
    	 int armSockets;
    
    public:
    	Torso() { };

  	    //getters
	    int getBatteryCompartments();
	    int getArmSockets();
	    
	    // setters
	    void setBatteryCompartments(int myBatteryCompartments);
	    void setArmSockets(int myArmSockets);
    	    void save_torso();
};

#endif
