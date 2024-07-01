// Q3.37 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.37 (Detecting Multiples of a Number) Write a program that prints 500 dollar signs($) one
//after the other, separated by a space.After every fiftieth dollar sign, the program should print a
//newline character.[Hint:Count from 1 to 500. Use the remainder operator to recognize when the
//counter reaches a multiple of 50]

#include <iostream>

int main()
{
	int count = 0;
	while (count != 500)
	{

	if (count % 50 == 0)printf("\n");
	printf("$ ");

			count++;
	}
}


