# include <stdio.h>

// ASCII tables- A standard way of representing symbols as nubmers
// Strings- used to represent multiple characters
// Float, double- used to represent decimal numbers, doubles have twice the memeory capacity as a float variable

int main(){
	

//	char x = 'a';
//
//	putchar(x);	

//Input Month/Day/Year

// 02/15/2006
	int day , month, year;
	char dateInput[10];
	
	while(1){
		
		printf("Please insert a date in the XX/XX/XXX format \n");
		gets(dateInput);
	
		sscanf(dateInput, "%d/%d/%d" , &month, &day , &year);
	
		printf("Day: %d Month: %d Year: %d \n\n", day, month, year);
	
	}
	
}
