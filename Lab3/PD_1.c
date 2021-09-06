#include<stdio.h>
#include<math.h>

int main (){
	//initiate variables
	float a, x, sum=0, counter=0;
	
	printf("We will be computing the Taylor Series of 1/(1-x)\n\n");
	
	//get user input
	printf("What percision would you like to compute until? ");
	scanf("%f", &a);
	
	printf("What value of x would you use for the Taylor Series? ");
	scanf("%f", &x);
	
	do{
		
		sum = sum + pow(x,counter); //compute running sum
		counter++;					//increment timer
	}while((pow(x,counter)>a));		//once new entry is smaller than percision escape loop
	
	//print results
	printf("Final Sum = %f", sum);
	
	return 0;
}
