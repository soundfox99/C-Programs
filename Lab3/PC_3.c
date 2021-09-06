#include<stdio.h>

int main (){
	char symbol;
	
	while(1){
		printf("Please insert a letter, otherwise enter # to exit: \n");
		scanf("%c", &symbol);
		getchar();
		
		if (symbol == 'b' || symbol == 'c' || symbol == 'd' || symbol == 'f' || symbol == 'g' || symbol == 'h' || symbol == 'j' || 
			symbol == 'k' || symbol == 'l' || symbol == 'm' || symbol == 'n' || symbol == 'p' || symbol == 'q' || symbol == 'r' || 
			symbol == 's' || symbol == 't' || symbol == 'v' || symbol == 'w' || symbol == 'x' || symbol == 'y' || symbol == 'z' || 
			symbol == 'B' || symbol == 'C' || symbol == 'D' || symbol == 'F' || symbol == 'G' || symbol == 'H' || symbol == 'J' || 
			symbol == 'K' || symbol == 'L' || symbol == 'M' || symbol == 'N' || symbol == 'P' || symbol == 'Q' || symbol == 'R' || 
			symbol == 'S' || symbol == 'T' || symbol == 'V' || symbol == 'W' || symbol == 'X' || symbol == 'Y' || symbol == 'Z' ){
			
			printf("Your letter is a constant\n\n");
		
		}
		
		else if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u' || symbol == 'A' || symbol == 'E' || 
		     	 symbol == 'I' || symbol == 'O' || symbol == 'U'){
		     	 	
					  printf("Your letter is a vowel\n\n");
		
		}
		     
		else if (symbol == '#'){
			break;
		}
		
		else{
			printf("Could not determine your input\n\n");
		}
	}
	
	return 0;
}
