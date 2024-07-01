// Q3.39 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.40 (Powers of 3 with an Infinite Loop) Write a program that keeps printing the powers of the
//integer 3, namely 3, 9, 27, 81, 243, and so on.Your loop should not terminate(i.e., you should
//	create an infinite loop).What happens when you run this program ?

#include <iostream>
#include<cstdio>
#include<stdio.h>

int main()
{
	int count = 1;
	int number=3;
	printf(" %f ", pow(3.0, count));
	//its give inf for multible of 3
	while (true) {
		printf(" %f ", pow(3, count));
		count++;
	}

	
}



