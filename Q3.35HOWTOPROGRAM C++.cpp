// Q3.35 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.35 (Printing the Decimal Equivalent of a Binary Number) Input an integer(5 digits or fewer)
//containing only 0s and 1s(i.e., a “binary” integer) and print its decimal equivalent.[Hint:Use the remainder and division operators to pick off the “binary” number’s digits one at a time from right to left.
//Just as in the decimal number system, in which the rightmost digit has a positional value of 1, and the
//next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then
//4, then 8, and so on.Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100.
//The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]



#include<iostream> 
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{ 
	int bin;
	int sum=0;
	int n = 0;
	int input_binary[5];


	cout<<"input number of binary digit :";
	cin >>n;
	while (n >= 6) {
		cout<<("input number of binary digit :");
		cin>>n;

	}

	cout << "input binary (5 digits or fewer) : ";
	cin >> bin;

	int i = 0;
			int temp=1;
			while (temp  != 0&& i<n) {

				input_binary[i] = bin % 10;
				bin = bin / 10;
				temp = bin;
				i++;
				//	cin >> input_binary[i];
			}
		
		while (i >= n && i<5) {
			input_binary[i] = 0;
			i++;
		}

	

	for (int i = 0; i < 5; i++)
	{
		sum += input_binary[i] * pow(2.0, (i / 1.0));

	}
	cout <<"number in desimal is :" << sum;
	





}




