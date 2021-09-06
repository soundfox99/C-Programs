#include<stdio.h>

int main(){
	unsigned int value1;
	int p, n;
	unsigned int mask1;
	
	//unsigned int has more bytes in which it can store the variable than unsigned char
	
	printf ("Please insert a hex value: ");
	scanf("%x", &value1);
	
	printf("p: ");
	scanf ("%d", &p);
	
	printf("n: ");
	scanf ("%d", &n);
	
	value1 = value1 >> (p - n + 1);
	
	mask1 = ~(0xFF << n);
	
	value1 = value1 & mask1;
	
	printf ("result: 0x%.2x", value1);
	
	return 0;
	
	
} // main
