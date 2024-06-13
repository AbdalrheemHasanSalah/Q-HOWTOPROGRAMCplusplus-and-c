// Q2.21 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{ 
	//print regtangle
	//printf("*****************");
	for (int i = 0; i < 17; i++) { 

		printf("*"); }
	printf("\n");

	//printf("* * * * * * * * * \n");
	for (int i = 0; i < 10; i++)
	{
		printf("*\t\t*\n");

	}
	//print circle with arrow
	printf("*****************");
	printf("\n\n \n");
	printf("      * * *   \n ");
	printf("   *   *    *\n ");
	printf("  *   * *    * \n ");
	printf(" *   * * *   * \n ");
	printf(" *     *     * \n ");
	printf(" *     *    * \n ");
	printf("  *    *   * \n ");
	printf("     * * *  \n  ");
	printf("\n");


	//print arrow 
	int k, i, j;
	for (k = 1; k <= 10; k++) {
		//printf("\n");
		for ( j =1; j <= 10 -k; j++) 
			//printf("  ");
			cout << ' ';
		for (i = 1; i<= 2 * k - 1; i++) 
			cout << '*';
			//printf(" * ");  
			
		cout << endl;
		if (k == 10) {
			for (int i = 1; i < 6; i++) {
				cout << "\t***" <<endl;

			}

		}
	}

	
	printf("\n");
	printf("\n");
	printf("\n");
	//print traingle
	for (int row = 1;  row< 10; row++) {
		for (int j = 1; j <=row;j++) {
		

			printf(" * ");

		}
		printf("\n");


	}
	cout << endl;


//print Rhombus

	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j <= 5 - i; j++) {
			cout << ' ';
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << '*';
		}
		cout << endl;

	}

	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= 5 - i; j++) {
			cout << ' ';
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << '*';
		}
		cout << endl;


	}

	//print Rhombus just line 


	int i2, j2, row, n, n2;
	printf("Please enter number of rows you want to see: \n");
	cin >> n;
	cin >> n2;
	for (row = 1; row <= n; row++)
	{

		for (j2 = 1; j2 <= n - row; j2++)
			//  printf("  ");

			cout << ' ';



		if (row != 1) cout << '*';
		for (i2 = 1; i2 <= 2 * row - 1; i2++)
			// printf("*");
		{
			cout << ' ';
			// cout << '*';
		}

		//  printf("  ");

		cout << '*';

		printf("\n");
		//  cout << endl;
	}


	for (row = n; row >= 1; row--)
	{

		for (j2 = 1; j2 <= n - row; j2++)
			//  printf("  ");

			cout << ' ';



		if (row != 1) cout << '*';
		for (i2 = 1; i2 <= 2 * row - 1; i2++)
			// printf("*");
		{
			cout << ' ';
			// cout << '*';
		}

		//  printf("  ");

		cout << '*';

		printf("\n");
		//  cout << endl;
	}
	
	

	
	//Q2.22
	printf("*\n**\n***\n****\n");


}


