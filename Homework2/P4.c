#include<stdio.h>

int main(){
	//initialize variables
	int number=0, divisor=0, prime_indicator=1;
	
	//get user input
	printf("Please pick a number: ");
	scanf("%d", &number);
	
	
	divisor = number;
	
	printf("The factors of %d are:\n", number);
	
	//while the divisor is greator than zero keep looping
	while(divisor != 0){
		//condition to determine if number is a facotr
		if ((number%divisor) == 0){
			printf("%d ", divisor);
			//tell if the number is prime using the following condition
			if (divisor==number){
			}
			else if (divisor == 1){
			}
			else if ((number%divisor) == 0){
			    prime_indicator = 0;
			}
		}
		divisor = divisor - 1;
		
	}
	
		//display results
		if (prime_indicator == 0){
		    printf("\nYour number %d, is not a prime number", number);
		}
		else if (prime_indicator == 1){
		    printf("\nYour number %d, is a prime number", number);
		}
		else{
		    printf("\nCould not determine if your number was prime or not");
		}
	
	return 0;
	
}

