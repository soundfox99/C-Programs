#include<stdio.h>
#include<stdlib.h>

int main(){
	//initiate variables
	FILE  *input_file, *output_file;
	char c, string_input[32], string_output[32];
	int counter1,counter2, index;
	
	//open input and output files
	input_file = fopen("p4in.txt", "r");
	
	if(input_file == NULL){
		printf("File p4in.txt cannot be opened. \n");
		exit(1);
	}
	
	output_file = fopen("p4out.txt","w");
	if(output_file == NULL){
		printf("File p4out.txt cannot be opened. \n");
		exit(1);
	}
	
	c = fgetc(input_file);
	
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
		
		//remove vowels
		counter1 = 0;
		counter2 = 0;
		while(string_input[counter1] != '\0'){
			//count the vowels
			if((string_input[counter1] == 'a')||
		   	   (string_input[counter1] == 'e')||
		       (string_input[counter1] == 'i')||
		       (string_input[counter1] == 'o')||
		       (string_input[counter1] == 'u')||
		       (string_input[counter1] == 'A')||
		       (string_input[counter1] == 'E')||
		       (string_input[counter1] == 'I')||
		   	   (string_input[counter1] == 'O')||
		       (string_input[counter1] == 'U')){	
				
			}
			else{
				string_output[counter2]=string_input[counter1];
				counter2++;
			}
			counter1++;
		}
		
		string_output[counter2]='\0';
		
		//output the results
		fprintf(output_file, "%s\n", string_output);
		
		
	}
	
	fclose(input_file);
	fclose(output_file);
	return 0;
}
