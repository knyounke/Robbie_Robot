#ifndef __CUSTOMER__H__
#define ___CUSTOMER__2017___

#include <string>
using namespace std;

class Customer
{

 private:
	string name;  
     	int customerNumber; 
     	double bill;

     
     public:
	 Customer(string name) : name{name}, /*customerNumber{Shop.customerCounter;},*/ bill{0} {}
  
     	void setName(string name);
     	string const getName();
    	void setBill(double bill);
 	double const getBill();
     	int const getCustomerNumber();

};


#endif
