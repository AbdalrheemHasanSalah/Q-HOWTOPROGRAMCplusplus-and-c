// Q2.23 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.23 (Largest and Smallest Integers) 
// Write a program that reads in three integers and then determines and prints the largest and the smallest integers in the group. 
#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	int x, y, z;
	cout << "input first number:";
	cin >> x;
	//printf("input first number:");
	//scanf("%d",&x);
	cout << "input second number:";
	cin >> y;
	//printf("input second number:");
	//scanf("%d",&y);
	cout << "input third number:";
	cin >> z;
	//printf("input third number:");
	//scanf("%d",&z);

	switch (x > y)
	{
	case true:
	{
		switch (x > z)
		{
		case true:
		{
			//printf("Largest is:", x);
			cout << "Largest is :" << x;
			break;
		}
		case false:
		{
			cout << "Largest is :" << z;
			break;

		}

		}
		break;
	}
	case false:
		switch (y > z)
		{
		case true:
		{
			//printf("Largest is:", x);
			cout << "Largest is :" << y;
			break;

		}
		case false:
		{
			cout << "Largest is :" << z;
			break;


		}
		break;

		}


	}
	cout << endl;

	switch (x < y)
	{
	case true:
	{
		switch (x < z)
		{
		case true:
		{
			//printf("Smallest is:", x);
			cout << "Smallest is :" << x;
			break;
		}
		case false:
		{
			cout << "Smallest is :" << z;
			break;

		}

		}
		break;
	}
	case false:
		switch (y > z)
		{
		case true:
		{
			//printf("Smallest is:", x);
			cout << "Smallest is :" << y;
			break;

		}
		case false:
		{
			cout << "Smallest is :" << z;
			break;


		}
		break;

		}


	}



}


