// Q2.33 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.33 2.33 (Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
//that calculates your daily driving cost, so that you can estimate how much money could be saved by
//car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
//congestion.The application should input the following information and display the user’s cost per
//day of driving to work :
//a) Total miles driven per day.
//b) Cost per gallon of gasoline.
//c) Average miles per gallon.
//d) Parking fees per day.
//e) Tolls per day.



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	int miles, gasoline_cost, avg_milesper_gallon, parking_fees, TOLLS;
	cout << "TOTAL MILES PER DAY :";
	cin >> miles;
	cout << endl;

	cout << "cost per gallon of gasoline :";
	cin >> gasoline_cost;
	cout << endl;

	cout << "AVARGE MILES PER GALLON :";
	cout << (miles / gasoline_cost);
	cout << "\n\n";


	cout << "parking fees per day :";
	cin >> parking_fees;
	cout << endl;

	cout << "TOLLS PER DAY:";
	cin >> TOLLS;
	cout << endl;
	cout << endl;
	cout << "\t\t\t";
	cout << "user cost per day : ";
	cout << (miles / gasoline_cost) + parking_fees + TOLLS;
	cout << "\n";

}



