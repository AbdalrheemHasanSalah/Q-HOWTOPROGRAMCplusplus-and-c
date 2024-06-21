// Q3.25HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.25 (Tabular Output) Write a program that utilizes looping to produce the following table of
//values :
//A A + 3 A + 6 A + 9
//7 10 13 63
//14 17 20 126
//21 24 27 189
//28 31 34 252
//35 38 41 315



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>



int main()
{
	int A,max;
	cout << "A is :";
	cin >> A;//7 for example
	cout << "max count  of A : ";
	cin >> max;//6 for example
	int count = 1;
	cout << "A\tA+3\tA+6\tA+9" << endl;

	while (count!= max) {
		cout << A * count <<"\t" << A * count + 3 <<"\t" << A * count + 6 <<"\t" << A * count + 9 << endl;

		count++;
}
		
}




