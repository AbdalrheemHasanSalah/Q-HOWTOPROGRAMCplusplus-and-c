// Q2.20 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>
int hour_function(int x);
int min_function(int reminder_hour);
int sec(int reminder_hour, int min);


int main()
{




	int x, min, hour, second, reminder_hour, reminder_min;
	printf("input time in second is :");
	scanf(" %d", &x);
	hour = hour_function(x);
	reminder_hour = x - (x / 3600) * 3600;
	min = min_function(reminder_hour);
	second = sec(reminder_hour, min);
	
	

	if (hour < 10 && min < 10 && second < 10) {
		printf("0%d :: 0%d :: 0%d", hour, min, second);

	}
	else if (hour < 10 && min < 10) {
		printf("0%d :: 0%d :: %d", hour, min, second);

	}
	else if (hour < 10 && second < 10) {
		printf("0%d :: %d :: 0%d", hour, min, second);

	}
	else if (min < 10 && second < 10) {
		printf("%d :: 0%d :: 0%d", hour, min, second);

	}
	else if (hour < 10) {
		printf("0%d :: %d :: %d", hour, min, second);

	}
	else if (min < 10) {
		printf("%d :: 0%d :: %d", hour, min, second);

	}
	else if (second < 10) {
		printf("%d :: %d :: 0%d", hour, min, second);

	}


	printf("\n%d :: %d :: %d", hour, min, second);


	 return 0;

}
int hour_function(int x) {
	return x / 3600;
}
int min_function(int reminder_hour) {
	return reminder_hour / 60;
}

int sec(int reminder_hour,int min) {
	return reminder_hour - min * 60;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
