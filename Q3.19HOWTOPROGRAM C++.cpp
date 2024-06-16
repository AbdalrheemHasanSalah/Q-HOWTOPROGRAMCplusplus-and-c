// Q3.19 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.19 (Interest Calculator) The simple interest on a loan is calculated by the formula
//interest = principal * rate * days / 365;
//The preceding formula assumes that rate is the annual interest rate, and therefore includes the
//division by 365 (days).Develop a program that will input principal, rate and days for several
//loans, and will calculate and display the simple interest for each loan, using the preceding formula.

#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>
void check();


int main()
{
			
  check();

		
	
}
void check() {
	int day_loan;

	double interest , rate;
	double principal;

	cout << "Enter loans principal (-1 to end) :";
	cin >> principal;
	if (principal != -1)
	{
		cout << "\n Enter interest rate :";
		cin >> rate;
		cout << "\n Enter term of the loan in days :";
		cin >> day_loan;
		interest = (principal * rate * day_loan) / 365.0;
		cout << "the interest charge is : $" << interest << endl;
		check();

	}
}



