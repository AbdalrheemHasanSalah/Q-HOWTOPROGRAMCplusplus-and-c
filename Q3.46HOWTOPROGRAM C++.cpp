// Q3.46 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.46 (World - Population - Growth Calculator) Use the web to determine the current world population and the annual world population growth rate.Write an application that inputs these values,
//then displays the estimated world population after one, two, three, four and five years.



#include <iostream>
#include<cstdio>
#include<stdio.h>



int main()
{
	long float P; 
	long float P0 = 8119527073;//constant population it time in year
	int year=0;
	std::cout << "input year to calculation  world population :";
	std::cin >> year;
	P = P0 * pow(2.09, year);
	std::cout << " world population after " << year << " is :"<<std::fixed << P;

	





}







