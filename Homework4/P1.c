#include <stdio.h>
#include <string.h>

int main(){
	//initiate variables
	char string_input[32], char_check;
	int same=0, index=0;
	
	//gets users input
	printf("Please insert a string: ");
	scanf("%s", string_input);
	
	printf("\nPlease insert a character: ");
	getchar();
	scanf("%c", &char_check);
	
	//looks for similiar strings
	for(index=0;index<strlen(string_input); index++){
		if (string_input[index]==char_check){
			same = same + 1;
		}
	}
	
	//prints results
	printf("\nThe number of the same characters in the string is: %d", same);
	
	return 0;
}
