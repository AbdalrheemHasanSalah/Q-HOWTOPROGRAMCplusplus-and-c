// Q3.23 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.23 (Find the Largest Number) The process of finding the largest number (i.e., the maximum
//of a group of numbers) is used frequently in computer applications.For example, a program that
//determines the winner of a sales contest would input the number of units sold by each salesperson.
//The salesperson who sells the most units wins the contest.Write a pseudocode program and then a
//program that inputs a series of 10 non - negative numbers and determines and prints the largest of
//the numbers.[Hint:Your program should use three variables as shown below.]
//counter: A counter to count to 10 (i.e., to keep track of how many numbers have
//	been input and to determine when all 10 numbers have been processed)
//	number : The current number input to the program
//	largest : The largest number found so far


#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>

string person_number(int count);


int main()
{ 
	cout << "                winner of a sales contest" << endl;
	cout << endl;

	int selas_person_number,largest=0;
	for (int count = 1; count <= 10;count++) {
		cout << "Enter selas person "<< person_number(count) <<" unit : ";
		cin >> selas_person_number;
		if (selas_person_number > 0&& largest< selas_person_number) {
			largest = selas_person_number;

		}

	}
	cout << "\nlargest is :" << largest << endl;

		
}

string person_number(int count) {
	if (count == 1)return "first";
	if (count == 2)return "second";
	if (count == 3)return "third";
	if (count == 4)return "fourth";
	if (count == 5)return "fifth";
	if (count == 6)return "sixth";
	if (count == 7)return "seventh";
	if (count == 8)return "eighth";
	if (count == 9)return "ninth";
	if (count == 10)return "tenth";





}



