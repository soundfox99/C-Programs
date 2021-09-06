#include<stdio.h>

int main(){
	int value1;
	
	printf ("Please enter a number: ");
	scanf ("%d", &value1);
	
	if (value1%2 == 0)
		printf ("Your number is even");
	else if (value1%2 == 1)
		printf ("You number is odd");
	else 
		printf ("An error has occured");
}
