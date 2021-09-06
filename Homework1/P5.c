#include<stdio.h>

int main(){
	char symbol;
	
	printf ("Please enter a letter: ");
	scanf ("%c", &symbol);
	
	if (symbol == 'b' || symbol == 'c' || symbol == 'd' || symbol == 'f' || symbol == 'g' || symbol == 'h' || symbol == 'j' || 
		symbol == 'k' || symbol == 'l' || symbol == 'm' || symbol == 'n' || symbol == 'p' || symbol == 'q' || symbol == 'r' || 
		symbol == 's' || symbol == 't' || symbol == 'v' || symbol == 'w' || symbol == 'x' || symbol == 'y' || symbol == 'z' || 
		symbol == 'B' || symbol == 'C' || symbol == 'D' || symbol == 'F' || symbol == 'G' || symbol == 'H' || symbol == 'J' || 
		symbol == 'K' || symbol == 'L' || symbol == 'M' || symbol == 'N' || symbol == 'P' || symbol == 'Q' || symbol == 'R' || 
		symbol == 'S' || symbol == 'T' || symbol == 'V' || symbol == 'W' || symbol == 'X' || symbol == 'Y' || symbol == 'Z' )
		
		printf("Your letter is a constant");
		
	else if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u' || symbol == 'A' || symbol == 'E' || 
		     symbol == 'I' || symbol == 'O' || symbol == 'U')
		     
		printf("Your letter is a vowel");
		
	else
		printf("Your symbol is not a letter");
}
