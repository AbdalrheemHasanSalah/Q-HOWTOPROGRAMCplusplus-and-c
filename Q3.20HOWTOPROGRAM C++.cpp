// Q3.20 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.20 (Salary Calculator) Develop a program that will determine the gross pay for each of several
//employees.The company pays “straight time” for the first 40 hours worked by each employee and
//pays “time - and -a - half” for all hours worked in excess of 40 hours.You’re given a list of the employees of the company,
// the number of hours each employee worked last week and the hourly rate of
//each employee.Your program should input this information for each employee and should determine and display the employee's gross pay.


#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	int hour;
	double  hourly_rate,pays;
	do
	{
		cout << "Enter # of hours worked (-1 to end):";
		cin >> hour;
		if (hour == -1)exit(0);
		cout << "\n Enter hourly rate of the worker ($00.00): ";
		cin >> hourly_rate;
		if (hour <= 40) {
			pays = hour * hourly_rate;
		}
		else if (hour > 40)
		{
			pays = ((hour - 40) * hourly_rate * 1.5) + (40 * hourly_rate);


		}
		cout << "Salary is $ " << pays << endl;

	} while (true);
		
	
}





