#include<stdio.h>

int main(){
	float user_input, past_input;
	int pos=0,neg=0,zeros=0;
	
	while(1){
		printf("Please enter a number: \n");
		scanf("%f", &user_input);
		
		if (user_input > 0){
			pos = pos +1;
		}
		else if (user_input < 0){
			neg = neg + 1;
		}
		else if (user_input==0){
			zeros = zeros + 1;
		}
		else{
			printf("Could not determine what your number was!");
		}
		
		printf("The number of zeros were %d\n", zeros);
		printf("The number of positives were %d\n", pos);
		printf("The number of negatives were %d\n", neg);
		
		printf("\n");
		
		if(past_input == user_input){
			break;
		}
		
		past_input = user_input;
	}
	
	
	return 0;
}
