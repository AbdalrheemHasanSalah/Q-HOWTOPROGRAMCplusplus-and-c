// Q3.36 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.36 (Armstrong Numbers) Armstrong numbers are numbers that are equal to the sum of their digits raised to power of the number of digits in them.The number 153, for example, equals 13 + 53 + 33 .
//Thus it is an Armstrong number.Write a program to display all three - digit Armstrong numbers



#include<iostream> 
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{ 
	int Armstrong_number;
	cin >> Armstrong_number;
	int temp = Armstrong_number;
	int count = 0;
	int sum = 0;
	int digit;

	while (temp != 0)
	{
		temp=temp / 10;
		count++;
	}
	int i = 0;
	int* arr = new int(count);
	temp = Armstrong_number;
	while (temp != 0)
	{
		*(arr + i) = temp % 10;
		 digit = pow(*(arr + i), count);

		sum+=pow(*(arr + i), count);
		cout <<"pow of digit " << i <<" is :" << digit << endl;
		temp = temp / 10;
		i++;

	}
	if (sum == Armstrong_number) {
		cout << sum << " is armstrong number .";
	}
	else 
	cout<< sum <<" is not armstrong number .";
}




