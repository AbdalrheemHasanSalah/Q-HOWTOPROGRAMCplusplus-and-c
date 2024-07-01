// Q3.43 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.43 (Sides of a Triangle) Write a program that reads three nonzero integer values and determines 
//and prints whether they could represent the sides of a triangle.

#include <iostream>
#include<cstdio>
#include<stdio.h>

int main()
{
	int a, b, c;
	std::cout << "the first side is :";
	std::cin >> a;
	if (a == 0) {
		std::cout << "print nonzero side \n";
		std::cout << "the first side is :";
		std::cin >> a;
	}
	std::cout << "\nthe seconed side is :";
	std::cin >> b;
	if (b == 0) {
		std::cout << "print nonzero side \n";
		std::cout << "the first side is :";
		std::cin >> b;
	}
	std::cout << "\nthe third side is :";
	std::cin >> c;
	if (c == 0) {
		std::cout << "print nonzero side \n";
		std::cout << "the first side is :";
		std::cin >> c;
	}

	if (a + b < c)printf("they could not be side triangle");
	else if (a +c < b)printf("they could not be side triangle");
	else if (b + c < a)printf("they could not be side triangle");
	else
   printf("they could be side triangle");

}



