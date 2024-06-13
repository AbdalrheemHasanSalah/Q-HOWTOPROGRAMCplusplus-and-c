// Q2.24 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.24 (Odd or Even) Write a program that reads an integer and determines and prints whether
//it’s odd or even.[Hint:Use the remainder operator. An even number is a multiple of two.
// Any multiple of two leaves a remainder of zero when divided by 2.]

#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	int x;
	cout << "the integer is :";
	cin >> x;
	if (x % 2 == 0) {
		cout << x << " is even";
	}
	else if (x % 2 == 1) {
		cout << x << " is odd";

	}


}


