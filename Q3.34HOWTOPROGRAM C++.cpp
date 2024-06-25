// Q3.34 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.34 (Floyd's Triangle) Floyd’s Triangle is a right-angled triangular array of natural numbers. It
//	is defined by filling rows with consecutive integers.Thus, row 1 will have the number 1, row 2 will
//	have the numbers 2 and 3, and so on.Write a program that draws a 10 - line Floyd’s triangle.An
//	outer loop can control the number of lines to be printed and an inner loop can ensure that each row
//	contains the correct number of integers.



#include<iostream> 
#include<stdio.h>
using namespace std;

int main()
{ 
	int n = 10;
	cout << "input number of row for triangle (defult =10): ";
	cin >> n;

	
	int count = 1;
	for (int row = 1; row <= n ; row++) {
		for (int i = 1; i <= row; i++)
		{
			cout << count;
			count++;
		}

		for (int j = 1; j <= n - row; j++) {
			cout << "\t";
		}
		cout << endl;

	}
	cout << endl;

}




