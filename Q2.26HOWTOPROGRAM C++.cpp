// Q2.26 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.26 (Multiples) Write a program that reads in two integers and determines and prints whether
//the first is a multiple of the second.[Hint:Use the remainder operator.]


#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{

	int first, second;
	cout << "first integer ";

	cin >> first;
	cout << "second integer ";
	cin >> second;


	if (first != 0 && second != 0)
	{
		if (second % first == 0) {
			cout << "first integer is multiple :" << first;
		}

		else
			cout << "first integer is not  multiple :" << first;
	}
	else
		cout << "wrong input zero doesnot have multiple";
}




