// Q2.30 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.30 (Separating Digits in an Integer) Write a program that inputs one five - digit number, 
//separates the number into its individual digits and prints the digits separated from one another by three
//spaces each.[Hint:Use combinations of integer division and the remainder operation.] 
// For example, if the user types in 42139, the program should print



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	int x,temp,count=0,reminder;
	cin >> x;
	temp = x;
	while(temp / 10 != 0) {
		temp = temp / 10;
		

		count++;

	}
	int* arr;
	arr = new int[count];
	for (int i = 0; i <= count; i++) {

	    reminder = x % 10;
		printf("%d\t", reminder);
		*(arr +i) = reminder;
		x = x / 10;

	}
	printf("\n");
	for (int i = count; i >= 0; i--) {
		printf("%d\t",*(arr+i));

	}



}


