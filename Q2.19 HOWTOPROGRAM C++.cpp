// Q2.16 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
int sum(int, int, int);
int avg(int, int, int);
int product(int, int, int);
void small(int x, int y, int z);
void largest(int x, int y, int z);



int main()
{ 

	int x, y, z;
	 
	printf("first number is :");
	scanf("%d", &x);
	printf("second number is:");
	scanf("%d", &y);
	printf("third number is :");
	scanf("%d", &z);
	printf("sum : %d\n ", sum(x, y, z));
	printf("avg : %d\n ", avg(x, y, z));
	printf("product : %d]\n ", product(x, y, z));
	  small(x, y, z);
	 largest(x, y, z);

	 return 0;

}
int sum(int x, int y, int z) {
	return x + y + z;
}
int avg(int x, int y, int z) {
	return ((x + y + z) / 3);
}
int product(int x, int y, int z)
{
	return x * y * z;
}
void small(int x, int y, int z)
{
	if (x < y && x < z)
		printf("first is smallest  : %d ",x);
	else if (y < x && y < z)
		printf("second is smallest : %d", y);
	else
		printf("third is smallest : %d ",z);

}
void largest(int x, int y, int z) {

	if (max(x, y) >= max(y, z))
		printf("largest is : % d", max(x, y));
	else
		printf("largest : %d ", z);
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
