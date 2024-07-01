// Q3.39 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.39 (Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard pattern :
//* * * * * * * *
// * * * * * * * *
//* * * * * * * *
// * * * * * * * *
//* * * * * * * *
// * * * * * * * *
//* * * * * * * *
// * * * * * * * *

//Your program must use only three output statements, one of each of the following forms :
//printf("%s", "* ");
//printf("%s", " ");
//puts(""); // outputs a newline

#include <iostream>
#include<cstdio>
#include<stdio.h>

int main()
{
	for (int i = 1; i <= 8; i++) {
		if (i % 2 == 0)printf("%s", " ");

		for (int i = 1; i <= 8; i++) {
			printf("%s", "* ");
			if (i == 8)puts("");
			
		}


	}
}



