#include<stdio.h>

int main(){
	char symbol;
	
	printf ("Please enter a symbol: ");
	scanf ("%c", &symbol);
	
	if (symbol == 'a' || symbol == 'b' || symbol == 'c' || symbol == 'd' || symbol == 'e' || symbol == 'f' || symbol == 'g' || symbol == 'h' || symbol == 'i' || 
		symbol == 'j' || symbol == 'k' || symbol == 'l' || symbol == 'm' || symbol == 'n' || symbol == 'o' || symbol == 'p' || symbol == 'q' || symbol == 'r' || 
		symbol == 's' || symbol == 't' || symbol == 'u' || symbol == 'v' || symbol == 'w' || symbol == 'x' || symbol == 'y' || symbol == 'z' || symbol == 'A' || 
		symbol == 'B' || symbol == 'C' || symbol == 'D' || symbol == 'E' || symbol == 'F' || symbol == 'G' || symbol == 'H' || symbol == 'I' || symbol == 'J' || 
		symbol == 'K' || symbol == 'L' || symbol == 'M' || symbol == 'N' || symbol == 'O' || symbol == 'P' || symbol == 'Q' || symbol == 'R' || symbol == 'S' ||
		symbol == 'T' || symbol == 'U' || symbol == 'V' || symbol == 'W' || symbol == 'X' || symbol == 'Y' || symbol == 'Z' )
		
		printf("Your symbol is a letter!");
	else
		printf("Your symbol is not a letter");
}
