// Q3.45 how to program c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.45 (Factorial)The factorial of a nonnegative integer n is written n!(pronounced “n factorial”)
//and is defined as follows :
//n!= n ·(n - 1) ·(n - 2) · … · 1 (for values of n greater than or equal to 1)
//and
//n!= 1 (for n = 0).
//For example, 5!= 5 · 4 · 3 · 2 · 1, which is 120.
//a) Write a program that reads a nonnegative integer and computes and prints its factorial.
//b) Write a program that estimates the value of the mahematical constant e by using the
//formula :
//e = 1+1/(1!)+1/(2!)+1/(3!)+....
//c) Write a program that computes the value of e
//x by using the formula:
//e^x =1+x/1!+x^2/2!+x^3/3!+......

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<cstdio>
#include<stdio.h>
int Factorial(int n);
double MathematicalConstant(int n);
double valeof_ex(int x, int n);


int main()
{
	int factorial,MathematicalConstant_get,ex_fact,x;
	printf("put factorial :");
	scanf("%i",&factorial);

	printf("put factorial to get MathematicalConstant :");
	scanf(" %i",&MathematicalConstant_get);

	printf("input factorial to computes ex: ");
	scanf("%i",&ex_fact);

	printf("input value of x:");
	scanf("%i", &x);

	//to get Factorial lock like q(a)
	printf("%d",Factorial(factorial));
	//to get mahematical constant in q(b)
	printf("\n%f", MathematicalConstant(MathematicalConstant_get));
	 printf("\n%f",valeof_ex(x, ex_fact));

}

int Factorial(int n) {
	int Factorial;
	for (int i = 0; i <= n; i++)
		if (i == 0)Factorial = 1;
		else
		{
			Factorial *= i;
		}
	return Factorial;

}

double MathematicalConstant(int n) {
	double e=1;
	for (int i = 1; i <= n; i++)
		e += (1.0 / Factorial(i));
	return e;
}

double valeof_ex(int x,int n) {
	double ex = 1;
	for (int i = 1; i <= n; i++)
	{
		ex+= ((double)pow(x, i) / (double)Factorial(i));
	}
	return ex;
}





