// Q2.16 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
void rainfall_highest(double x, double y);


int main()
{ 
	double rainfall_current, rainfall_higest;

	printf("rainfall_current :");
	scanf("%lf", &rainfall_current);

	printf("rainfall_higest :");
	scanf("%lf", &rainfall_higest);

	 rainfall_highest(rainfall_current, rainfall_higest);





}
void rainfall_highest(double x, double y) {
	if (x >= y)
		printf("the rainfall is highest current year");
	else
		printf("the rainfall is not perfct looks like other year");

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
