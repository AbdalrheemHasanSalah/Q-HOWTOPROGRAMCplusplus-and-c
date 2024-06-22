// Q3.32 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.32 (Square of Asterisks) Write a program that reads in the side of a square and then prints that
//square out of asterisks.Your program should work for squares of all side sizes between 1 and 20. For
//example, if your program reads a size of 4, it should print



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>



int main()
{ 
	int x;
	cin >> x;
	if (x <= 20 && x>=1)
	{
		for (int i = 1; i <= x; i++)
		{
			for (int i = 1; i <= x; i++)
				printf("*");
			printf("\n");
		}
	}
}




