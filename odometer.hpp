#include "odometer.cpp"

//default constructor
Odometer :: Odometer()
{
	miles = 0;
	gallons = 0;
}

//Constructor
Odometer :: Odometer(int mi, float gal)
{
	miles = mi;
	gallons = gal;
}

//Takes in information from all trips and total them up and then calcul
//ate the total MPG.
void Odometer :: add_trip(int addmi, float addgal)
{	
	miles = addmi;
	gallons = addgal;
	mpg = miles / gallons;
}

//Takes data from user input and calculate the amount of miles that
//can be driven based on mpg.
float Odometer :: check_mileage(float chkgal)
{	
	mileage = chkgal * mpg;
	return mileage;
}

//returns miles for a specified object
int Odometer :: get_miles(void)
{
	return miles;
}

//returns gallons for a specified object
float Odometer :: get_gallons(void)
{
	return gallons;
}

//returns the mpg for the specified object
float Odometer :: get_mpg(void)
{
	return mpg;
}
