#include "customer.h"

void Customer::setName(string n)
{
name = n;
}

string const Customer::getName()
{
return name;
}

void Customer::setBill(double b)
{
bill = b;

}


double const Customer::getBill()
{
return bill;
}

int const Customer::getCustomerNumber()
{
return customerNumber;
}
