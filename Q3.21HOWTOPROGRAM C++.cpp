// Q3.21 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.21 (Preincrementing vs Postincrementing) Write a program that demonstrates the difference
//between preincrementing and postincrementing using the increment operator ++.

#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	int x;
	cout << "postincremant"<<endl;
	for (int i = 0; i < 5; i++) {
		cout << "\ni before : " << i<<endl;

		x = i++;
		cout << "i after: " << i << "\t";
		cout << "x = " << x;
		cout << endl;

	}
	cout << "\npreincremant"<<endl;
	for (int i = 0; i < 5; i++) {
		cout << "\ni before :" << i<<endl;

		x = ++i;
		cout << "i after: " << i<<"\t";
		cout << "x = " << x;
		cout << endl;


	}

	x = 0;
	int* p=new int();
	*p = x--;
	cout << *p;
	x = 0;
	int* p2 = new int();
	*p2 = --x;
	cout << *p2;
	
		
}





