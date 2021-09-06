#include<stdio.h>

int main (){
	//initialize variables
	char number[32];
	int i, one_counter=0, zero_counter=0;
	
	//get users input
	printf("Enter your binary number: ");
	scanf("%s", number);
	
	//iterate through the number string
	for(i=0;i<strlen(number);i++){
		//count the ones and zeros in the number
		if (number[i]=='0'){ 
		 zero_counter = zero_counter+1;
		}
		else if(number[i]=='1'){ 
		 one_counter = one_counter+1;
		}	
	}
	
	//display the results
	printf("\n");
	printf("The number of ones is: %d\n", one_counter);
	printf("The number of zeros is: %d\n", zero_counter);
	
	
}
