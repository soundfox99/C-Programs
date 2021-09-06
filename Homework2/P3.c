#include<stdio.h>

int main (){
	//initialize variables
	char number[32];
	int i, one_counter=0, zero_counter=0;
	
	//get users inputted binary number
	printf("Enter your binary number: ");
	scanf("%s", number);
	
	//iterate through number
	for(i=0;i<strlen(number);i++){
		if (number[i]=='0'){ 
		 //get number of leading zeros
		 zero_counter = zero_counter+1;
		}
		else if(number[i]=='1'){ 
		 break; //escape for loop when you get to a one
		}	
	}
	
	//display the results
	printf("\n");
	printf("The number of leading zeros is: %d\n", zero_counter);
	
	
}
