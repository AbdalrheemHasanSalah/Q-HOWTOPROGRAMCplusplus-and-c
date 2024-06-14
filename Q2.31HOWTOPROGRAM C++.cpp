// Q2.31 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.31 (Table of Squares and Cubes) write
//a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs .



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{ //c code
	printf("number\t");
	printf("square\t");
	printf("cube\n");

	for (int i = 0; i <= 10; i++) {
		printf("%d\t", i);
		printf("%d\t", i * i);
		printf("%d", i * i*i);
		printf("\n");


	}
	cout << endl;
	//c++ code
	cout << "number\t";
	cout << "squer\t";
	cout << "cube\n";

	for (int i = 10; i <= 20; i++) {
		cout<<i<<"\t";
		cout << i*i << "\t";
		cout << i*i*i ;
		cout << endl;

	}
}


