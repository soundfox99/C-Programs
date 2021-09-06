#include<stdio.h>

int main(){
	int leap_year;
	
	printf ("Please enter a year: ");
	scanf ("%d", &leap_year);
	
	if (leap_year % 400 == 0)
		printf ("The year is a leap year");
	else if (leap_year % 100 == 0 || leap_year % 4 != 0)
		printf ("The year is not a leap year");
	else if (leap_year % 4 == 0)
		printf("The year is a leap year");
	else
		printf ("An error has occured in problem 10");
}
