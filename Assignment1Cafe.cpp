/*
File name		: AssignmentCafe.cpp
Programmer		: Muhammad Farhan B. Mohd Narodi
Section 		: 1
Matrix number	: AM1705002282
Title			: Lab Assignment 1 (Individual)
Purpose			: Question 2 - To calculate the price of the different types of menus and the tax charge
Date 			: 5 July 2017
*/

#include <iostream>
using namespace std;    // The Header File

int main()
{                       // Program Starts
	int code;           // Declaration of variable
	cout<<"Please enter your menu code so you can receive your bill."<<endl;  // Instructions to insert data
	cin>>code;          // Input of data
	switch(code)        // Switch Function
{
case 1: // The statements for the menu code if 1 is entered
	cout<<"The bill for the Western menu is RM20.00,"<<endl;
		cout<<"but with an additional payment of 10% for Government Service Tax,"<<endl;
			cout<<"the total payment is RM22.00, thank you."<<endl;
	break;
case 2: // The statements for the menu code if 2 is entered
	cout<<"The bill for the Asian menu is RM15.00,"<<endl;
		cout<<"but with an additional payment of 10% for Government Service Tax,"<<endl;
			cout<<"the total payment is RM16.50, thank you."<<endl;
	break;
case 3: // The statements for the menu code if 3 is entered
	cout<<"The bill for the Arabic menu is RM25.00,"<<endl;
		cout<<"but with an additional payment of 10% for Government Service Tax,"<<endl;
			cout<<"the total payment is RM27.50, thank you."<<endl;
	break;
}	return 0;

} // Program Ends
