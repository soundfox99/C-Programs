#include<stdio.h>

int main(){
	int user_input;
	
	printf("Please insert a hex number: ");
	scanf("%x",&user_input);
	
	printf("Your hex number in binary is %d", user_input);
	//the largest number you can compute is 7f (127) becuase this is the largest number where the 2 to the 8 bit is still 0 indicating the number
	//is positive if this bit was 1 then the computer would think that the number is negative therefore can not be the largest number
}
