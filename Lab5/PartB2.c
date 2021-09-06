#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	//initiate variables
	FILE *input_file, *output_file;
	char c, input_string[32], number_string[32];
	int index=0, counter=0;
	float new_value=0, sum=0, exponent=0;
		
	//opens file PB2.txt in read mode
	input_file = fopen("PB2_in.txt","r");
	
	if(input_file == NULL){
		printf("Error: file PB2_in.txt was not opened correctly\n");
		exit(1);
	} // if
	
	output_file = fopen("PB2_out.txt", "w");
	
	if(output_file == NULL){
		printf("Error: file PB2_out.txt cannot be opened\n");
		exit(1);
	}
	
	do{
		//get initial value
		c = fgetc(input_file);
		
		
		//reset index for the string
		index = 0;
		
		//only set specific values to the string
		if((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')||(c=='e')||(c=='E')){
			while((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')||(c=='e')||(c=='E')){
				//printf("%c", c);
				//add character to string
				input_string[index] = c;
				c = fgetc(input_file);
				
				//increment index and add closing value to input_string
				index++;
				input_string[index] = '\0';
				
				//condition to exit if the is and e
				if((c=='e')||(c=='E')){
					break;
				}
		
			}
			//convert string to float
			new_value = atof(input_string);
			
			//if e or E multiply by a factor of 10
			if((c=='e')||(c=='E')){
					c = fgetc(input_file);
					if((c>='0'&&c<='9')){ //only accept next value if it is a number
						index = 0;
						input_string[0] = '\0';
						while((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')){
							input_string[index] = c;
							c = fgetc(input_file);

							index++;
							input_string[index] = '\0';
						}
						//get the value of the exponent
						exponent = atof(input_string);
						
						//get the new value
						new_value = new_value * pow(10, exponent);
					}
				}
			// print the new value
			fprintf(output_file,"%f\n", new_value);
			
			//compute running sum and number of strings
			counter++;
			sum = sum + new_value;
			
		}
		
	}while(c != EOF);
	
	//print final sum and average
	fprintf(output_file,"\nThe sum is %f \nThe average is %f", sum, sum/counter);
	
	fclose(input_file);
	fclose(output_file);
	return 0;

}
