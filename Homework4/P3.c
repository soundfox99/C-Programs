#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	//initiate variables
	FILE *input_file, *output_file;
	char c, current_string[32], most_string[32], least_string[32];
	int	current_vowel=0, most_vowel=0, least_vowel=0, index=0, counter=0, first_iteration=1;
	
	//initiate files
	input_file = fopen("p3in.txt", "r");
	if(input_file == NULL){
		printf("Could not access p3in.txt");
		exit(1);
	}
	
	output_file = fopen("p3out.txt", "w");
	if(input_file == NULL){
		printf("Could not access p3in.txt");
		exit(1);
	}
	
	//get first character
	c = fgetc(input_file);
	
	//repeat untill the end of the file
	while(c != EOF){
		//reset index for each new string
		index = 0;
		current_vowel=0;
		current_string[0]='\0';
		//only put letters in the string
		while((c >= 'a' && c <= 'z')|| 
			  (c >= 'A' && c <= 'Z')){
			
			current_string[index] = c;
			index++;
			c = fgetc(input_file);
		}
		
		//end string
		current_string[index] = '\0';
		//printf("%s\n", current_string);
		c = fgetc(input_file);
		
		if(current_string[0]=='\0'){
			continue;
		}
		
		counter = 0;
		
		while(current_string[counter] != '\0'){
			//count the vowels
			if((current_string[counter] == 'a')||
		   	   (current_string[counter] == 'e')||
		       (current_string[counter] == 'i')||
		       (current_string[counter] == 'o')||
		       (current_string[counter] == 'u')||
		       (current_string[counter] == 'A')||
		       (current_string[counter] == 'E')||
		       (current_string[counter] == 'I')||
		   	   (current_string[counter] == 'O')||
		       (current_string[counter] == 'U')){
					
				current_vowel++;	
				
			}
			counter++;
		}
		
		if(first_iteration == 1){ //set the first string equal to the least and most vowels to have a comparison
			most_vowel=current_vowel;
			least_vowel=current_vowel;
			
			strcpy(most_string,current_string);
			strcpy(least_string,current_string);
			
			first_iteration = 0;
		}
		//compare vowel count in strings
		if(current_vowel < least_vowel){
			least_vowel=current_vowel;
			strcpy(least_string,current_string);
		}
		if(current_vowel > most_vowel){
			most_vowel=current_vowel;
			strcpy(most_string,current_string);
		}
		//print individual string results
		fprintf(output_file, "The string: %s, has %d vowels\n", current_string, current_vowel);
	}
	//print most and least results
	fprintf(output_file, "\nThe string with the most vowels is: %s, and it has %d vowels\n", most_string, most_vowel);
	fprintf(output_file, "The string with the least vowels is: %s, and it has %d vowels\n", least_string, least_vowel);
	
	fclose(input_file);
	fclose(output_file);
	return 0;
}
