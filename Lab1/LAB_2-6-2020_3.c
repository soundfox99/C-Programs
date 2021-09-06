#include <stdio.h>
#include <math.h>
	
	int main(){
		int i;
		float value;
		char command;
		double result;
		
		for (i=0;i<10;i+1){		//i++ is the same
		
		printf ("Please provide a value: \n");
		scanf  ("%f", &value);
		
		printf ("Please provide a command: \n");
		
		getchar();
		scanf  ("%c", &command);
		
		//commands : exponential, log, square root, absolute value
		
		switch(command){
			case 'e': result = exp(value); break;
			case '/': 
				if (value < 0)
					printf("Error: input vlaue can't be less than zero to calculate log\n'");
				else
					result = log(value); break;
			case 'r': 
				if (value < 0)
					printf("Error: input vlaue can't be less than zero to calculate log\n'");
				else
					result = sqrt(value); break;
			case 'm': result = fabs(value); break;
			default: printf ("Incorrect command %c", command); break;
		}
		
		if (command == 'e' || command == '/' || command == 'r' || command == 'm')
			
			printf("Result: ");
			printf("%f \n\n", result);

		} 
		
		
	}
	
	
	
