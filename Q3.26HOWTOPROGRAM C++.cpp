// Q3.26HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find the two
//largest values of the 10 numbers.[Note:You may input each number only once.]



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>



int main()
{
	int largest1=0, largest2=0, invalue,count=1;
	do {
		cout << "input number " << count<<":";
		cin >> invalue;

		if (invalue > largest1)
		{
			largest2 = largest1;
			largest1 = invalue;

		}
		else if (invalue > largest2)
			largest2 = invalue;
		

		count++;
	} while (count != 11);
	cout << "\nlargest 1 is :" << largest1<<endl;
	cout << "largest 2 is :" << largest2<<endl;

}




