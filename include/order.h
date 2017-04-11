#ifndef ___ORDER__H___
#define ___ORDER___2017___

#include "robot_model.h"
class Order 
{

	private:
		int _orderNumber;
		int _quantity;
		bool _status;
		//Customer _customer;
		//Sales_Assosciate _salesAssociate;
		Robot_Model _model;
		double _total_bill;
	
	public:
	
	
  	bool getStatus();
	void setQuantity();
	void setRobotModel();
	int getOrderNumber();
	int getQuantity();
	Robot_Model getRobotModel();



};



#endif
