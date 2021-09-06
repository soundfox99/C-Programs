#include<stdio.h>

int main(){
	// initialize variables
	int user_input=0, even_number=0, odd_number=0;
	char exit_char;
	
	while(1){
		//get user input
		printf("Please enter a number\n");
		scanf("%d", &user_input);
		
		//determine if the input is even or odd
		if((user_input%2)==0){
			even_number = even_number + user_input;
		
		}
		else if((user_input%2)==1){
			odd_number = odd_number + user_input;
		}
		else{
			printf("Could determine if user input is even or odd\n");
		}
		
		//condition to exit the loop
		printf("Please insert the # symbole to stop the program and display the results otherwise enter anything else to continue\n");
		
		getchar();
		scanf("%c", &exit_char);
		
		if(exit_char == '#'){
			//print results if exit character is hit
			printf("Exiting Program\n\n");
			printf("The even values so far is %d\n", even_number);
			printf("The odd values so far is %d\n", odd_number);
			return 0;
		}
		else{
			printf("Running through program again\n\n");
		
	}
	

}

}
