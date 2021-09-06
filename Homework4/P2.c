#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	//initiate variables
	FILE *input_file, *output_file;
	char c, string_input[32];
	int index=0;
	
	// opens input files in read more
	input_file = fopen ("p2in.txt", "r");
	if (input_file == NULL) {
		printf ("Error: file in1.txt was not opened correctly\n");
		exit (1);
	} // if
	
	//opens output file in write mode
	output_file = fopen ("p2out.txt", "w");
	if (output_file == NULL) {
		printf ("Error: file out1.txt cannot be opened\n");
		exit(1);
	}
	
	//initial iteration through input file
	c = fgetc (input_file);
	
	//repeat untill the end of the file
	while(c != EOF){
		//reset index for each new string
		index = 0;
		string_input[0]='\0';
		//only put letters in the string
		while((c >= 'a' && c <= 'z')|| 
			  (c >= 'A' && c <= 'Z')){
			
			string_input[index] = c;
			index++;
			c = fgetc(input_file);
		}
		
		//end string
		string_input[index] = '\0';
		//printf("%s\n", current_string);
		c = fgetc(input_file);
		
		if(string_input[0]=='\0'){
			continue;
		}
		
		//reverse the string
		strrev(string_input);

		//output the results
		fprintf(output_file, "%s ", string_input);
		
		
	}
	
	fclose(input_file);
	fclose(output_file);
	return 0;
}
