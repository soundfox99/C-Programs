#include<stdio.h>
//loop instructions

int main(){
	int counter;
	float user_input=0, pos=0, neg=0, pos_counter=0, neg_counter=0;
	
	//iterate through code 15 times
	for(counter=0;counter<15;counter++){
		//get input from user
		printf("Please insert a number: \n");
		scanf("%f", &user_input);
		
		//if user input is negative
		if (user_input<0.0){   //input is negative
			// change value of total negative numbers
			neg = neg + user_input;
			//change the negative counter
			neg_counter = neg_counter +1;
			
		}
		
		//input is positive
		else if (user_input>0.0){
			// change value of total positive numbers
			pos = pos + user_input;
			//change the positive counter
			pos_counter = pos_counter +1;
			
		}
		//if user's input is zero
		else{
			
		}
	}
	
	//condition to make sure if user does not input a number it does not break the code
	if (neg_counter==0){
		neg_counter = 1;
	}
	if (pos_counter==0){
		pos_counter = 1;
	}
	
	//display results
	printf("The average of the positive numbers is %.2f\n", (pos/pos_counter));
	printf("The average of the negative numbers is %.2f\n", (neg/neg_counter));
	
	return 0;
}
