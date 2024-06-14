// Q2.32 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.32 (Body Mass Index Calculator) 



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>
int BMI(int, int);
int BMI(double, double);

int main()
{
	int a;
	cout << "choose 1 for kilograms and meter \t 2 for bound and inches   your choose is :";
	cin >> a;
	switch (a) {
	case 1: {
		int x, y;
		cout << "weight in kilograms:";
		cin >> x;
		cout << endl;
		cout << "height in meter :";
		cin >> y;
		cout << endl;
		int bmi;
		bmi = BMI(x, y);

		if (bmi < 18.5)
			cout << "underweight: less than 18.5";
		else if (18.5 <= bmi < 25)
			cout << "Normal : between 18.5 and 24.9";
		else if (25 <= bmi < 30)
			cout << "overweiht: between 25 and 30";
		else if (30 <= bmi)
			cout << "Obase:   30 or greater";
		break;

	}
	case 2:
	{
		double x, y;
		cout << "weight in bound:";
		cin >> x;
		cout << endl;
		cout << "height in inches :";
		cin >> y;
		cout << endl;
		double bmi;
		bmi = BMI(x, y);

		if (bmi < 18.5)
			cout << "underweight: less than 18.5";
		else if (18.5 <= bmi < 25)
			cout << "Normal : between 18.5 and 24.9";
		else if (25 <= bmi < 30)
			cout << "overweiht: between 25 and 30";
		else if (30 <= bmi)
			cout << "Obase:   30 or greater";
		break;

	}
	default:
	{
		cout << "wrong input"<<endl;

		cout<< "underweight: less than 18.5"<<endl;
		cout << "Normal : between 18.5 and 24.9"<<endl;
		cout << "overweiht: between 25 and 30"<<endl;
		cout << "Obase:   30 or greater";

		break;
	}
	}
}
//weight in kilograms and height in meter
int BMI(int weight,int height) {
	return (weight /( height * height));
}
//weight in bound and height in inches
int BMI(double weight, double height) {

	return ((weight * 703) / (height * height));
}

