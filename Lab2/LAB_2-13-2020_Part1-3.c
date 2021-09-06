#include<stdio.h>

int main (){
	//Problem 1 Part 3: Changing last 4 bits
	unsigned int char5;
	
	printf("Please insert your hexidecimal value: ");
	scanf("%x", &char5);
	
	printf("Your new value is: 0x%.2x \n", (char5|0x0f));
	
	return 0;
}
