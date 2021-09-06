#include<stdio.h>

int main(){
	int n, counter;
	float value1, value2, value3, past_largest, temp;
	
	printf("How many iterations: ");
	scanf("%d", &n);
	
	while(1){
		
		printf("\n");
		
		printf ("value 1: ");
		scanf ("%f", &value1);
		printf ("value 2: ");
		scanf ("%f", &value2);
		printf ("value 3: ");
		scanf ("%f", &value3);

		if (value1 > value2){
			temp = value1;
			value1 = value2;
			value2 = temp;
		}
		if (value1 > value3){
			temp = value1;
			value1 = value3;
			value3 = temp;
		}
		if(value2>value3){
			temp = value2;
			value2= value3;
			value3 = temp;
		}	
		
		printf("The numbers from largest to smallest is %f, %f, %f \n", value3,value2,value1);
		
		if(past_largest == value3){
			counter++;
		}
		
		past_largest = value3;
		
		if(counter == n){
			break;
		}
	}
	return 0;
	
}
