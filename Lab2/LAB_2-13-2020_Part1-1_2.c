#include<stdio.h>

int main(){
	unsigned char  char5=0x00;
	unsigned char char4 = 0xbe;
	unsigned char char3 = 0x3b;
	unsigned char char2 = 0xda;
	unsigned char char1 = 0x12;
	
	// Problem 1 Part 1: Using sizeof() to find byte size 
	printf("%lu \n", sizeof(unsigned char));
	printf("%lu \n", sizeof(unsigned short));
	printf("%lu \n", sizeof(unsigned int));
	printf("%lu \n", (sizeof(unsigned long)*2));
	
	
	//Problem 1 Part 2: Bitwise operation
	printf("\n\n");
	
	//Getting the four hex user inputs
	printf("Please insert your first hexidecimal value: ");
	scanf("%x", &char1);
	getchar();
	
	printf("Please insert your second hexidecimal value: ");
	scanf("%x", &char2);
	getchar();
	
	printf("Please insert your third hexidecimal value: ");
	scanf("%x", &char3);
	getchar();
	
	printf("Please insert your fourth hexidecimal value: ");
	scanf("%x", &char4);
	getchar();
	
	//print hex values
	printf("\n\n");
	printf("char1 = 0x%.2x \n", char1);
	printf("char2 = 0x%.2x \n", char2);
	printf("char3 = 0x%.2x \n", char3);
	printf("char4 = 0x%.2x \n", char4);
	
	//print decimal values	
	printf("\n\n");
	printf("char1 = %d \n", char1);
	printf("char2 = %d \n", char2);
	printf("char3 = %d \n", char3);
	printf("char4 = %d \n", char4);
	
	//print character versions
	printf("\n\n");
	printf("char1 = %c \n", char1);
	printf("char2 = %c \n", char2);
	printf("char3 = %c \n", char3);
	printf("char4 = %c \n", char4);
	
	//preforming the the neccesary bitwise operations and print results
	printf("\n\nThe bitwise and operation of value 1 and value 2 is: 0x%.2x \n", (char1&char2));
	printf("The bitwise and operation of value 1 or value 2 is: 0x%.2x \n", (char1|char2));
	printf("The bitwise and operation of value 1 xor value 2 is: 0x%.2x \n", (char1^char2));
	
	printf("\nThe bitwise and operation of value 3 and value 4 is: 0x%.2x \n", (char3&char4));
	printf("The bitwise and operation of value 3 or value 4 is: 0x%.2x \n", (char3|char4));
	printf("The bitwise and operation of value 3 xor value 4 is: 0x%.2x \n", (char3^char4));
	
	return 0;
}
