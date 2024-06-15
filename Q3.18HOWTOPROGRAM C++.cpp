// Q3.17 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.17 (Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank customer's mortgage. For each customer, the following facts are available:
//a) the account number
//b) the mortgage amount
//c) the mortgage term
//d) the interest rate
//The program should input each fact, calculate the total interest payable(= mortgage amount
//	× interest rate × mortgage term), and add it to the mortgage amount to get the total amount payable.
//	It should calculate the required monthly payment by dividing the total amount payable by the
//	number of months in the mortgage term.The program should display the required monthly payment rounded off to the nearest dollar.The program should process each customer's account at a
//	time.

#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	double sales_person, sales_person_earnings, receives=200.0;
	do
	{
		cout << "\nEnter sales in dollars(-1 to end) : ";
		cin >> sales_person;
		sales_person_earnings = receives + (double(sales_person) * (9.0 / 100.0));
		switch (sales_person != -1)
		{case (true): {
			cout << "\nsalary is: $" << sales_person_earnings;
			break;
		}
		case(false):
		{
			cout << "good luck";
			break;

		}
	  }

	} while (sales_person != -1);
}



