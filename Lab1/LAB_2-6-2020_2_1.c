#include <stdio.h>

int main(){
	int i;
	float inputFloat, Sum = 0;
	
	//for (i=0;i<10;i+1) 
	while(1){		//i++ is the same
		
		
		printf ("\nPlease input a floating number: \n");
		scanf("%f", &inputFloat);
	
		Sum = Sum + inputFloat;
	
		printf("Sum: ");
		printf("%0.3f \n", Sum);
	}
	
}
