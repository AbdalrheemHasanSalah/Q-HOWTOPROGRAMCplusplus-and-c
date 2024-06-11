// Q2.16 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>

double velocity(double , double , double);
double distance(double, double, double);


int main()
{ 
	double u , a, t;

	printf("velocity initial :");
	scanf("%lf", &u);

	printf("acceleration  :");
	scanf("%lf", &a);

	printf("time :");
	scanf("%lf", &t);



	 printf("velocity =%lf\n",velocity(u, a, t));
	 printf("distance =%lf",distance(u, t, a));






}

double velocity(double u, double a, double t) {

	double v = u + a * t;
	return v;
}

double distance(double u, double t, double a) {
	double s = u * t + .5 * a * pow(a, 2);
	return s;
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
