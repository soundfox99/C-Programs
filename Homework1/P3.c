#include<stdio.h>

int main(){
	int value1;
	
	printf ("Enter a number: ");
	scanf("%d", &value1);
	
	if (value1 < 0)
		printf ("You value is negative");
	else if (value1 > 0)
		printf ("Your value is positive");
	else if (value1 == 0)
		printf ("Trick! your value is zero");
	else
		printf ("Unable to determine");
}
