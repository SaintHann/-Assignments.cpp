/*
File Name	: Assignment2SBAI.cpp
Programmer	: Muhammad Farhan B Mohd Narodi
Section		: 1
Matrix No.	: AM1705002282
Topic		: Question 1
Purpose		: To provide different types of packages for SBAI travel & tour
Date		: 3/8/2017
*/

#include<iostream>
using namespace std;

int main() // Start of Program 
{
	// Declaration of Variables
	int person;
	char package, reply;
	double StaffNO, PhoneNO;
	// Looping of Program
	do
	{
		// First Half of Display
		cout<<" 				Welcome to SBAI Travel & Tours "			<<endl;
		cout<<"                                                "			<<endl;
		cout<<" Staff No. ID : "											      ;
		cin>>StaffNO															  ;
		cout<<" Customer No. Phone : "                                            ;
		cin>>PhoneNO                                                              ;
		cout<<" Choose package code (A, B, C) : "                                 ;
		cin>>package                                                              ;
		// Switch for package
	switch (package)
	{
		
			case 'A':	
		// The Other Hafl of Display for case A
		cout<<" Package Name : Normal"                                      <<endl;
		cout<<" Choose how many persons in the room (2, 3, 6) : "                 ;
		cin>>person                                                               ;
		// Room and Price for Normal Package
		if (person == 2)
		{
		cout<<" Room Z "                                                    <<endl;
		cout<<" RM3045 per person "                                         <<endl;
		cout<<" The total needed to pay is RM6090 "                         <<endl;
		}
		if (person == 3)
		{
		cout<<" Room Y "													<<endl;		
		cout<<" RM1930 per person "											<<endl;
		cout<<" The total needed to pay is RM5790 "							<<endl;	
		}
		if (person == 6)
		{
		cout<<" Rooom X "													<<endl;
		cout<<" RM915 per person "											<<endl;
		cout<<" The total amount needed to pay is RM5490 "					<<endl;
		}
		break;
		
			case 'B':
		// The Other Half of Display for case B
		cout<<" Package Name : School Holiday "								<<endl;
		cout<<" Choose how many persons in the room (2, 3, 6) : "				  ;
		cin>>person																  ;
		// Room and Price for School Holiday Package
		if (person == 2)
		{
		cout<<" Room Z "                                                     <<endl;
		cout<<" RM3495 per person "											 <<endl;
		cout<<" The total needed to pay is RM6990 "							 <<endl;
		}
		if (person == 3)
		{
		cout<<" Room Y "													 <<endl;
		cout<<" RM2230 per person "										     <<endl;
		cout<<" The total needed to pay is RM6690 "                          <<endl;
		}
		if (person == 6)
		{
		cout<<" Room X "													 <<endl;
		cout<<" RM1065 per person "											 <<endl;		
		cout<<" The total needed to pay is RM6390 "							 <<endl;
		}
		break;
		
			case 'C':
		// The Other Half of Display case C
		cout<<" Package Name : Ramadhan "									 <<endl;
		cout<<" Choose how many persons in the room (2, 3, 6) : "                  ;
		cin>>person																   ;
		// Room and Price for Ramadhan Package
		if (person == 2)
		{
		cout<<" Room Z "													 <<endl;
		cout<<" RM5445 per person "											 <<endl;
		cout<<" The total needed to pay is RM10890 "						 <<endl;
		}
		if (person == 3)
		{
		cout<<" Room Y "													 <<endl;
		cout<<" RM3463 per person "											 <<endl;
		cout<<" The total needed to pay is RM10390 "						 <<endl;
		}
		if (person == 6)
		{
		cout<<" Room X"														 <<endl;
		cout<<" RM1648 per person "											 <<endl;
		cout<<" The total needed to pay is RM9890 "							 <<endl;	
		}
		break;
		
		}
		// Option to continue or end the program
		cout<<" Do you wish to continue? <Y : N>";
		cin>>reply;
	
	} 	
	while (reply == 'Y' && reply != 'N'); // The keyword to end the program
		cout<<"\n\nThank You "<<endl;	// Display for program termination
		
	return 0;
} // End of program
