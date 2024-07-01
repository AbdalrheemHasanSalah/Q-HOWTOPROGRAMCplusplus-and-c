// Q3.41 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.41 (Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a
//circle(as a float value) and computes and prints the diameter, the circumference and the area.Use
//the value 3.14159 for ?.

#include <iostream>
#include<cstdio>
#include<stdio.h>

int main()
{
	float radius;
	std::cout << "input radius :";
	std::cin >> radius;
	float Circumference, Area;

	Area = (radius * radius) * 3.14159;
	std::cout << "Area : " << Area << "\n";
	Circumference = 2 * 3.14159 * radius;
	std::cout << "Circumference : " << Circumference;

}



