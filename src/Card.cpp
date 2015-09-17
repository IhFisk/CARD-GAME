#include "Card.h"

//constructor

Card::Card ()
{
	cdNumber = 0;
	family = "";
}

Card::Card (int value, std::string familyValue)
{
	cdNumber = value;
	family = familyValue;
}

//destructor

Card::~Card()
{

}

//get list

int Card::getCdNumber ()
{
	return cdNumber;
}

std::string Card::getFamily ()
{
	return family;
}
