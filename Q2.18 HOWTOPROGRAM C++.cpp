// 2.18 (Comparing Values) Write a program that asks the user to enter the highest rainfall ever in
//one season for a country, and the rainfall in the current year for that country, obtains the values from
//the user, checks if the current rainfall exceed the highest rainfall and prints an appropriate message
//on the screen. If the current rainfall is higher, it assigns that value as the highest rainfall ever. Use
//only the single-selection form of the if statement .


#include<iostream> 
using namespace std;
#include <stdio.h>
#include <math.h>
void rainfall_highest(double x, double y);


int main()
{ 
	double rainfall_current, rainfall_higest;

	printf("rainfall_current :");
	scanf("%lf", &rainfall_current);

	printf("rainfall_higest :");
	scanf("%lf", &rainfall_higest);

	 rainfall_highest(rainfall_current, rainfall_higest);





}
void rainfall_highest(double x, double y) {
	if (x >= y)
		printf("the rainfall is highest current year");
	else
		printf("the rainfall is not perfct looks like other year");

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
