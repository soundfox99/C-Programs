#include<stdio.h>
#include<math.h>

int main (){
	//initialize variables
	float taylor_series=1, new_expression=0, counter=1, x=0, a=0;
	
	//get user inputs
	printf("We will be computing the Taylor Series of ln(x)\n\n");
	
	printf("What value of x would you like to use for the Taylor Series (Must be great than 0 and less than or equal to 2)? ");
	scanf("%f", &x);
	
	printf("\nWhat percision (in decimal)) would you like to compute until? ");
	scanf("%f", &a);
	
	taylor_series = x-1;
	
	do{
		
		new_expression = (((pow((-1),counter))*pow((x-1),(counter+1)))/(counter+1));
		taylor_series = taylor_series + new_expression;
		
		counter++;
			
	}while(fabs(new_expression)>a);
	
	printf("\nln(%.3f) is %f", x,taylor_series);
	
	return 0;
	
}
	
