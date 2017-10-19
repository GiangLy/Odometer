/*
Function: Odometer
Constructor: Zero miles and gallons
Inputs: None
Outputs: None data is going to be zeroed
Return: N/A
	Zero out data

Function: Odometer
Constructor: Accepts miles driven and number of gallons
Inputs: Miles, Gallons
Outputs: None
Return: Miles per Gallon
	Miles = Miles passed in
	Gallons = Gallons passed in

Function: add_trip
Description: Takes the number of gallons and number of miles and adds
	it to the previous values.
Inputs: Miles, Gallons
Outputs: None
Return: None
	Miles = Total Miles
	Gallons = Total Gallons
	Miles per Gallon = Miles / Gallon

Function: check_mileage
Description: Takes the number of gallons and base on miles per gallon
	return how many miles can be driven.
Inputs: Gallons
Outputs: Miles that can be driven.
Return: Miles can be driven based on gallons of gas.
	miles_left = Gallons * miles per gallon

Function: print_info
Description: Displays the miles, gallons, and miles per gallon.
Inputs: None
Outputs: miles, gallons, miles per gallon
Return: None
*/
#ifndef __ODOMETER__
#define __ODOMETER__
class Odometer
{
	//Declare class variables *Private
	int miles;
	float gallons;
	float mpg;
	float mileage;
	
	//Public allows access to data
	public:
        //default constructor
		Odometer(void);
        Odometer(int mi, float gal);
        //Function Prototypes
		void add_trip(int addmi, float addgal);
		float check_mileage(float chkgal);
		int get_miles(void);
		float get_gallons(void);
		float get_mpg(void);
};
#endif
