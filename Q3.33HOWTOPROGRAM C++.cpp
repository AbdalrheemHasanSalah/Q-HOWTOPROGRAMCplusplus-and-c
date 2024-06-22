// Q3.33 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.33 (Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.32 so that it
//prints a hollow square.For example, if your program reads a size of 5, it should print



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>



int main()
{ 
	int x;
	cin >> x;
	
	for (int i = 1; i <= x; i++) {
		printf("*");
	}
	printf("\n");

		for (int i = 1; i <= (x - 2); i++) {
			printf("*");
			for (int i = 1; i <=(x - 2); i++)
				printf(" ");
			printf("*");
			printf("\n");
		}
		for (int i = 1; i <= x; i++) {
			printf("*");
		}
}




