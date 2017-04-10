#ifndef __SALES_ASSOCIATE__H__
#define __SALES_ASSOCIATE__2017__

#include <string>

using namespace std;


class Sales_Associate
{
    private:
	 string name;
    	 int saNumber;
    	 string type;

    
    public:
	 Sales_Associate(string _name, string _type) : name{_name}, type{_type}/* saNumber{shop.employeeCounter} */ {}
    
 	string const getName();

  	string setName(string s);
   	int const getSaNumber();

    	void setType(string t);	
	string const getType();
	void save_associate();


};


#endif
