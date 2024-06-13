// Q2.16 HOWTOPROGRAM C++.cpp 

//2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains them from
//the user and prints their sum, product, difference, quotient and remainder.


#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
//double sum(double x, double y);
double product(double x, double y);
double difference(double x, double y);
double quotient(double x, double y);
double remainder(double x, double y);
double sum(double x, double y) {

	return x + y;

}

int main()
{
	double x, y, out;                     
	printf(" enter first number :"); 
	scanf(" %lf", &x);                     cin >> x;
	printf("enter socend number ");
	scanf(" %lf ", &y);  cin >> y;
	 

	printf("sum is : %lf\n", sum(x,y));
	printf("product is : %lf\n", sum(x,y));
	printf("difference is : %lf\n", difference(x, y));
	printf("quotient is : %lf\n", quotient(x, y));
	printf("remainder is : %lf \n", remainder(x, y));









}

double product(double x, double  y) {

	return x * y;

}

double difference(double  x, double y) {

	return x - y;

}

double quotient(double x, double y) {

	return x / y;

}
double remainder(int x, int y) {
	int rem ;
	while ((x / y) * y != x) {
		rem = x - ((x / y) * y);
		if ((rem < y))
			return rem;

		
	}
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
