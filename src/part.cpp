#include "part.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <exception>

using namespace std;


    //getters
   	string Part::getName()
    	{
           return _name;
    	}
    
   	int Part::getNumberOfParts()
    	{
           return _numberOfParts;
    	}
    
    	int Part::getPartNumber()
    	{
          return _partNumber;
    	}
    
    	string Part::getDescription()
        {
           return _description;
        }

        string Part::getType()
	{
           return _type;
    	}

    	double Part::getPrice()
	{
           return _price;
    	}
    
   //setters
        void Part::setName(string name)
       {
        _name = name;
       }
    
    	void Part::setPartNumber(int partNumber)
	{
           _partNumber = partNumber;
    	}
    
    	void Part::setType(string type)
	{
           _type = type;
    	}
   
   	void Part::setPrice(double price)
	{
          _price = price;
   	}
    
    	void Part::setDescription(string description)
	{
       	   _description = description;
        }

    
    	void Part::addParts()
	{
           _numberOfParts++;
        }
