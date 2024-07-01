// Q3.44 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.44 (Sides of a Right Triangle) Write a program that reads three nonzero integers 
//and determines and prints whether they could be the sides of a right triangle

#include <iostream>
#include<cstdio>
#include<stdio.h>

int main()
{

	int a, b, c;
	std::cout << "input first side is :";
		std::cin >> a;
		if (a != 0) {
			std::cout << "\n";
		}
		else {
			std::cout << "input first side is :";
			std::cin >> a;
		}
		std::cout << "input second side is :";
		std::cin >> b;
		if (b != 0) {
			std::cout << "\n";
		}
		else {
			std::cout << "input first side is :";
			std::cin >> b;
		}
		std::cout << "input thrid side is :";
		std::cin >> c;
		if (c != 0) {
			std::cout << "\n";
		}
		else {
			std::cout << "input first side is :";
			std::cin >> c;
		}
		if ((a * a) + (b * b) == (c * c))
			std::cout << "could be the sides of a right triangle";
		else if(pow(a,2)+pow(c,2)==pow(b,2))
		std::cout << "could be the sides of a right triangle";
		else if (pow(b, 2) + pow(c, 2) == pow(a, 2))
			std::cout << "could be the sides of a right triangle";
		else
			std::cout << "could not  be the sides of a right triangle";


}






