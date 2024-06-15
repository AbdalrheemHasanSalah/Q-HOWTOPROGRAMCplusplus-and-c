// Q3.16 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.16 (Sales Tax) Sales tax is collected from buyers and remitted to the government.A retailer
//has to file a monthly sales tax report which lists the sales for the month and the amount of sales
//tax collected, at both the county and state levels.Develop a program that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state
//taxes.Assume that states have a 4 % sales tax and counties have a 5 % sales tax.Here is a sample
//input / output dialog.

#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	string month=" ";

	double total_amount=0.0,state_tax,county_tax,total_tax,sales;
	while (total_amount != -1) {
		cout << "Enter total amount collected(-1 to quit) : $ ";
		cin >> total_amount;
		cout << endl;
		//printf("Enter total amount collected(-1 to quit) : $ ");
		///	scanf("%lf \n", &total_amount);
		if (total_amount == -1)exit(0);

		cout << "Enter name of month :";
		cin >> month;
		cout << endl;
		//	printf("Enter name of month :");
			//scanf(" %s \n", &month);


		state_tax = (4.0 / 100.0) * total_amount;
		county_tax = (5.0 / 100.0) * total_amount;
		total_tax = state_tax + county_tax;
		sales = total_amount - total_tax;

		cout << "Total collection : $" << total_amount << endl;
		cout << "sales : $ " << sales << endl;
		cout << "county sales tax : $" << county_tax << endl;
		cout << "state sales tax : $ " << state_tax << endl;
		cout << "Total sales tax collected :$ " << total_tax << endl;

		//printf("Total collection : $%lf\n", total_amount);
		//printf("sales : $%lf\n", sales);
		//printf("county sales tax : %lf\n", county_tax);
		//printf("state sales tax : $%lf\n", state_tax);
		//printf("Total sales tax collected :$ %lf\n", total_tax);
	}

}



