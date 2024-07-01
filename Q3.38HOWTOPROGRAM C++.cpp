// Q3.38 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.38 (Counting 9s) Write a program that reads an integer(5 digits or fewer) and determines and
//prints how many digits in the integer are 9s

#include <iostream>
#include<cstdio>
#include<stdio.h>
int count();
int count_9s(int count);
int main()
{

	int x = count();
	while( x> 5) {

		x=count();
	}
	printf("%d  is 5 digits or fewer ",x);

}

int count() {
	int input = 0;
	int count_9 = 0;

	printf("input number 5 digits or fewer :");
	scanf("%d", &input);
	int temp;
	temp = input;
	int count = 0;
	for (; temp != 0; count++)
	{
		if (temp % 9 == 0) {
			count_9=count_9s(count_9);
		}
		temp /= 10;
		
	}
	printf("count 9 =  %d\n", count_9);
	return count;
}

int count_9s(int count) {
	count++;
	return count;
}

