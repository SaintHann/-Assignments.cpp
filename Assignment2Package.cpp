/*
File Name	: Assignment2Package.cpp
Programmer	: Muhammad Farhan B Mohd Narodi
Section		: 1
Matrix No.	: AM1705002282
Topic		: Question 1
Purpose		: To provide selection of packages for the Disney Theme Park tickets
Date		: 26/7/2017
*/

#include<iostream>
using namespace std;

int main() 
{   // Program Starts
	// Declaration of Variables
	int package;
	double adult, child, senior, price;
	// Visual display of options and prices
	cout<<" Hello and welcome! please choose your preferred package to our Disney Themed Park, "<<endl;
	cout<<" the packages that we provide and the price per person are as:"<<endl;
	cout<<"                                                             "<<endl;
	cout<<" ----------------------------------------------------------- "<<endl;
	cout<<" | Package || Water Park  || Amusement Park || Petting Zoo | "<<endl;
	cout<<" |---------||-------------||----------------||-------------| "<<endl;
	cout<<" | Number  ||      1      ||        2       ||      3      | "<<endl;
	cout<<" |---------||-------------||----------------||-------------| "<<endl;
	cout<<" | Adult   ||  RM47.90    ||    RM25.90     ||   RM15.90   | "<<endl;
	cout<<" |---------||-------------||----------------||-------------| "<<endl;
	cout<<" | Child   ||  RM41.50    ||    RM20.50     ||   RM12.50   | "<<endl;
	cout<<" |---------||-------------||----------------||-------------| "<<endl;
	cout<<" | Senior  ||  RM35.40    ||    RM15.40     ||   RM10.40   | "<<endl;
	cout<<" ----------------------------------------------------------- "<<endl;
	cout<<"                                                             "<<endl;
	cout<<" The ages elligible for certain ticket types are:"<<endl;
	cout<<" Adult (13-54)  Child (4-12)  Senior (above55)"<<endl;
	cout<<" Please type in the number for your choice of package."<<endl;
	// Package choosing
	cin>>package;
	// Precision to two decimal points
	cout. setf(ios::fixed);
	cout.precision(2);
	// Switch to see other packages and ticket prices
	switch(package)
	{   
		case 1:  // Display for Water Park
			cout<<" Number of Adult "<<endl;
			cin>>adult;
			cout<<" Number of Child "<<endl;
			cin>>child;
			cout<<" Number of Senior "<<endl;
			cin>>senior;
			price = adult*47.90+child*41.50+senior*35.40;
			cout<<" The total payment is RM"<<price<<" for the Water Park package."<<endl;
				break;
		case 2: // Display for Amusement Park
			cout<<" Number of Adult "<<endl;
			cin>>adult;
			cout<<" Number of Child "<<endl;
			cin>>child;
			cout<<" Number of Senior "<<endl;
			cin>>senior;
			price = adult*25.90+child*20.50+senior*15.40;
			cout<<" The total payment is RM"<<price<<" for the Amusement Park package."<<endl;
				break;
		case 3: // Display for Petting Zoo
			cout<<" Number of Adult "<<endl;
			cin>>adult;
			cout<<" Number of Child "<<endl;
			cin>>child;
			cout<<" Number of Senior "<<endl;
			cin>>senior;
			price = adult*15.90+child*12.50+senior*10.40;
			cout<<" The total payment is RM"<<price<<" for the Petting Zoo package."<<endl;
				break;
		default: // Display if invalid number
			cout<<" Invalid package number, please try again. "<<endl;
			
			return 0;	
	}
} // Program Ends
