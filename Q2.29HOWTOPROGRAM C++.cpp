// Q2.29 HOWTOPROGRAM C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//2.29 (Integer Value of a Character) Here’s a peek ahead.C can also represent uppercase letters, lowercase letters and a considerable
//variety of special symbols.C uses small integers internally to represent each different character.The
//set of characters a computer uses together with the corresponding integer representations for those
//characters is called that computer’s character set.You can print the integer equivalent of uppercase
//A, for example, by executing the statement
//printf("%d", 'A');
//Write a C program that prints the integer equivalents of some uppercase letters, lowercase letters,
//digits and special symbols.As a minimum, determine the integer equivalents of the following :
//ABCabc012$ * +/ and the blank character.


#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
#include <string>


int main()
{
	printf("ASCII CODE OF A : %d\n", 'A');
	printf("ASCII CODE OF B : %d\n", 'B');
	printf("ASCII CODE OF C : %d\n", 'C');
	printf("ASCII CODE OF a : %d\n", 'a');
	printf("ASCII CODE OF b : %d\n", 'b');
	printf("ASCII CODE OF c : %d\n", 'c');
	printf("ASCII CODE OF 0 : %d\n", '0');
	printf("ASCII CODE OF 1 : %d\n", '1');
	printf("ASCII CODE OF 2 : %d\n", '2');
	printf("ASCII CODE OF $ : %d\n", '$');
	printf("ASCII CODE OF * : %d\n", '*');
	printf("ASCII CODE OF + : %d\n", '+');
	printf("ASCII CODE OF / : %d\n", '/');




}




