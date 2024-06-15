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
	int account_number=0;
	double mortgage_amount, mortgage_term, interest_rate,total_amount_payable, monthly_payment;
	for (int i = 0; account_number != -1; i++)
	{
		cout << "\nEnter account number (-1 to end):";
		cin >> account_number;
		if (account_number != -1) {
			cout << "\nEnter mortgage amount(in dollars) : ";
			cin >> mortgage_amount;
			cout << "\nEnter mortgage term(in years) :";
			cin >> mortgage_term;
			cout << "\nEnter interest rate(as a decimal) : ";
			cin >> interest_rate;
			total_amount_payable = (mortgage_amount * interest_rate * mortgage_term) + mortgage_amount;

			monthly_payment = total_amount_payable / (mortgage_term * 12.0);
			cout << "\nThe monthly payable interest $ " << monthly_payment;
			cout << endl;
		}
	}
}



