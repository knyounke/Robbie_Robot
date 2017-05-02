#ifndef ___PART_H
#define ___PART_H 2017

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <exception>

using namespace std;

class Part 
{
   

    public:
	
	string _name;
    	int _partNumber; 
    	string _type;
    	double _price;
        string _description;
    	int _numberOfParts; 

	Part(string name, string type, double price, string description): _name{name}, _partNumber{_numberOfParts++}, _type{type}, _price{price}, _description{description} {};
    	Part(){ };

    //getters
   	string const getName();
   	int const getNumberOfParts();
    	int const getPartNumber();
    	string const getDescription();
        string const getType();
    	double const getPrice();

   //setters
        void setName(string name);
    	void setPartNumber(int partNumber);
    	void setType(string type);
   	void setPrice(double price);
    	void setDescription(string description);
    	void addParts();
};

#endif
