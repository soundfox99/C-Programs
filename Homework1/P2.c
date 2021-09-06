#include<stdio.h>

int main(){
	int value1, value2, value3, largest_num;
	
	printf ("value 1: ");
	scanf ("%d", &value1);
	printf ("value 2: ");
	scanf ("%d", &value2);
	printf ("value 3: ");
	scanf ("%d", &value3);
	
	largest_num = value1;
	
	if (largest_num < value2)
		largest_num = value2;
	if (largest_num < value3)
		largest_num = value3;
		
	printf("The largest number is %d", largest_num);
}
