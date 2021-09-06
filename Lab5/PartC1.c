#include<stdio.h>
#include<stdlib.h>

int main(){
	//initiate variables and strings
	FILE *input_file, *output_file;
	char d, c, input_string[32], number_string[32];
	int index=0, counter=0;
	float x_value=0, y_value=0, new_value=0;
		
	//opens file pc1.txt in read mode
	input_file = fopen("PC1_in.txt","r");
	
	if(input_file == NULL){
		printf("Error: file pc1_in.txt was not opened correctly\n");
		exit(1);
	} // if
	
	//opens or creates file PC1_out in write mode
	output_file = fopen("PC1_out.txt", "w");
	
	if(output_file == NULL){
		printf("Error: file pc1_out.txt cannot be opened\n");
		exit(1);
	}
	
		// readon one character from the input file
		c = fgetc(input_file);
		
		//Finds initial condition
		do{ //do untill we see the word initial
			input_string[index] = c;
			index++;
			c = fgetc(input_file);
			input_string[index] = '\0';
		}while(strcmp(input_string, "INITIAL")==0);
		
		//reset index and input_string
		index = 0;
		input_string[0] = '\0';
		
		//used this while to ignore spaces until the (
		while(c != '('){
			c = fgetc(input_file);
		}
		
		//get the x value from the parantesis
		while(c != ','){
			c = fgetc(input_file);
			number_string[index] = c;
			index++;
			number_string[index] = '\0';
		}
		
		//printf("%s\n", number_string);
		//convert the string to an float and store it as x_value
		x_value = atof(number_string);
		printf("%f\n", x_value);
		
		//reset variables
		index = 0;
		number_string[0] = '\0';
		
		//get a string version of the y_value
		while(c != ')'){
			c = fgetc(input_file);
			number_string[index] = c;
			index++;
			number_string[index] = '\0';
		}
		
		//convert the y string into a float
		y_value = atof(number_string);
		printf("%f\n", y_value);
		
		//c = fgetc(input_file);
		//index = 0;
		
		//reset the string
		index = 0;
		number_string[0] = '\0';
	
	
	do{ //do while not the end of the file
		c = fgetc(input_file); // get first character for comparision
		
		//reset strings and varaible
		index = 0;
		input_string[0] = '\0';
		
		//if c is a direction than start getting the numbers
		if((c == 'U')||(c == 'D')||(c == 'L')||(c == 'R')){
			//printf("%c", c);
			d = c;	// store value for if statement later on
			
			//get next character
			c = fgetc(input_file);
			while(!((c == 'U')||(c == 'D')||(c == 'L')||(c == 'R'))){		// if the value is not a direction do not stop
				while((c == '.' )||(c == '-')||(c == '+')||(c>='0'&&c<='9')){	//store numbe values in a string
					input_string[index] = c;	//store strings
					index++;
					c = fgetc(input_file);
				}
				c = fgetc(input_file);			
			}
			
			//convert number string into a float
			new_value = atof(input_string);
			printf("%f\n", new_value);
			
			//decide where the string needs to go
			if(d == 'U'){
				y_value = y_value + new_value;
			}
			else if(d == 'D'){
				y_value = y_value - new_value;
			}
			else if(d == 'R'){
				x_value = x_value + new_value;
			}
			else if(d == 'L'){
				x_value = x_value - new_value;
			}
		}
	
		
	}while(c!=EOF);
		
	//print the final positions of the robot
	printf("Final Position (%f,%f)", x_value, y_value);
	
	fprintf(output_file, "Final Position (%f,%f)", x_value, y_value);
	
	fclose(input_file);
	fclose(output_file);
	
	return 0;
}
