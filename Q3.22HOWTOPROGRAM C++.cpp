// Q3.22 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.22 (Checking if a Number is Prime) A prime number is any natural number greater than 1 that
//is divisible only by 1 and by itself.Write a C program that reads an integer and determines whether
//it is a prime number or not.

#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>
bool isPrime(int num) {
	if (num <= 1) return false;
	for (int i = 2; i <= sqrt(num); ++i) {
		if (num % i == 0) return false;
	}
	return true;
}

int main()
{
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	if (isPrime(number)) {
		cout << number << " is a prime number." << endl;
	}
	else {
		cout << number << " is not a prime number." << endl;
	}
	

	
		
}





