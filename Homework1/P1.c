#include<stdio.h>

int main(){
	int value1, value2, temp_value;
	
	printf ("Value 1 = ");
	scanf("%d", &value1);
	
	printf ("Value 2 = ");
	scanf("%d", &value2);
	
	temp_value = value1;
	value1 = value2;
	value2 = temp_value;
	
	printf ("value1 = %d\n", value1);
	printf ("value2 = %d\n", value2);
	
	return;
}
