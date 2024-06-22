// Q3.27HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.27 (Validating User Input) Modify the program in Figure 3.10 to validate its inputs.On any
//input, if the value entered is other than 1 or 2, keep looping until the user enters a correct valueut each number only once.]



#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>



int main()
{ 
	unsigned int pass = 0;
	unsigned int fail = 0;
	unsigned int student = 0;
	unsigned int max_student=10;
	char check;
	int result;
	cout << "input student number (default value is 10)  "<<endl;
	cout << "input (y) IF you wont to change it (n) if not : ";
	cin >> check;
	switch (check)
	{
	case 'y':

	{
		cout << "max_student of your class : ";
		cin >> max_student; 
		break;
	}
	default:
	{
		break;
	}
	}
	while (student!= max_student) {
		cout << "Enter Result(1 = pass, 2 = fail) : ";
		cin >> result;
		switch (result)
		{
		case 1:
		{
			pass++;
			student++;
			break;
		}
		case 2: {
			fail++;
			student++;
			break;
		}
		default :
		{
			continue;
		}
		}
	}


	cout <<" pass " << pass<<endl;
	cout <<" fail " << fail<<endl;
	if (pass >= ((80.0 / 100.0) * student)) {
		cout << "Bonus to instructor!"<<endl;
	}






}




