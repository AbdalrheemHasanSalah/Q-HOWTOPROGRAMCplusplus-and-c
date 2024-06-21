// Q3.24HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.24 (Tabular Output) Write a program that uses looping to print the following table of values.
//Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.

//N N2 N3 N4
//1 1 1 1
//2 4 8 16
//3 9 27 81
//4 16 64 256
//5 25 125 625
//6 36 216 1296
//7 49 343 2401
//8 64 512 4096
//9 81 729 6561
//10 100 1000 10000



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>



int main()
{
	cout << "N1\tN2\tN3\tN4" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << "\t" << i * i << "\t" << i * i * i << "\t" << i * i * i * i << endl;

	}

		
}




