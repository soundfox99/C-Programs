#include<stdio.h>

int main(){
	//initialize variables
	int series_sum=0, user_input=0, new_number=0, counter=0;
	
	//get user inputs
	printf("Please insert the number of iterations you want: \n");
	scanf("%d", &user_input);
	
	//iterate through series of in the problem (9+99+999+...)
	for(counter=0;counter<user_input;counter++){
		new_number = ((new_number*10)+9);
		series_sum = series_sum + new_number;
	}
	
	//print results
	printf("The sum of the series is %d", series_sum);
	
	return 0;
}
