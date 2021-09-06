#include<stdio.h>
#include<math.h>

int main (){
	//initialize variables
	float x=0, a=0, taylor_series=1, factorial=1, new_expression=0;
	int counter=1, i=0;
	
	//get user inputs
	printf("We will be computing the Taylor Series of cos(x)\n\n");
	
	printf("What value of x would you use for the Taylor Series? ");
	scanf("%f", &x);
	
	printf("\nWhat percision (in decimal)) would you like to compute until? ");
	scanf("%f", &a);
	
	do{
		//restarts factorial
		factorial=1;
		
		//for loop to compute new factorial
		for(i=1; i<= (counter*2);i++){
			factorial = factorial * i;
		}
		
		//calculate the new expression to add to the existing taylor series total
		new_expression = (((pow((-1),counter))*pow(x,(2*counter)))/factorial);
		//calculate the new total of the taylor series
		taylor_series = taylor_series + new_expression;
		
		counter++; // increment counter for next run through
		
	}while(fabs(new_expression)>a); // exist loop when the new expression becomes small than our precision value
	
	//print results
	printf("cos(%.3f) is %f", x,taylor_series);
	
	return 0;
	
}
	
