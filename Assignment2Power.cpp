/*
File Name	: Assignment2P=Vi.cpp
Programmer	: Muhammad Farhan B Mohd Narodi
Section		: 1
Matrix No.	: AM1705002282
Topic		: Question 2
Purpose		: To calculate the power consumed by a heater using the equation p = vi
Date		: 3/8/2017
*/

#include<iostream>
using namespace std;

// Function Prototypes
double power (double, double);
void display (double, double, double);
// Start of main function
int main()
{
	// Declaration of Variables
	int sentinel = 4, num;
	double voltage, current, total;
	
	
	while (num != sentinel)
	{
	// Initial Display
	cout<<" The amount of power consumed by this heater can be calculated with P = Vi\n "<<endl;
	cout<<" Type in the number for Voltage [v] = ";
	cin>>voltage;
	cout<<" Type in the number for the current [i] = ";
	cin>>current;
	cout<<" Enter this ["<<sentinel<<"] number to end this program = ";
	cin>>num;
	// Call Function power ()
	total = power (voltage, current);
	// Call Function display ()
	display (voltage, current, total);
	}
	return 0;
}
double power (double voltage, double current)
{
	double power;
	// Formulae of Equation
	power = voltage*current;
	return power;
}
void display(double voltage, double current, double total)
{
	cout<<"                                                                           "<<endl;
	cout<<"          ================================================                 "<<endl;
	cout<<"          |   Voltage   |     Current   ||     Power    ||                 "<<endl;
	cout<<"          |-------------|---------------||--------------||                 "<<endl;
	cout<<"          |\t["<<voltage<<"]\t|\t["<<current<<"]\t||\t*"<<total<<"*\t||    "<<endl;
	cout<<"          ================================================                 "<<endl;                    	
}


