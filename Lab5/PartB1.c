#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//initiate files
	FILE *input_file, *output_file;
	char c, input_string[32], number_string[32];
	int index=0, counter=0;
	float new_value=0, sum=0;
		
	//opens file pc1.txt in read mode
	input_file = fopen("PB1_in.txt","r");
	
	if(input_file == NULL){
		printf("Error: file pc1_in.txt was not opened correctly\n");
		exit(1);
	} // if
	
	output_file = fopen("PB1_out.txt", "w");
	
	if(output_file == NULL){
		printf("Error: file pc1_out.txt cannot be opened\n");
		exit(1);
	}
	
	do{
		//get first number
		c = fgetc(input_file);
		
		//reset index
		index = 0;
		//only get inputs if specific characters
		if((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')){
			while((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')){
				//start creating string
				input_string[index] = c;
				c = fgetc(input_file);
				
				index++;
				input_string[index] = '\0';
				
				if(c == '-'||c=='+'){
					break;
				}
		
			}
			//if condition if there is a value of 1-8
			if(c == '-'||c=='+'){
				c = fgetc(input_file);		
			}
			
			//convert string to float
			new_value = atof(input_string);
			//print results for every line
			fprintf(output_file,"%f\n", new_value);
			//increment sum and counter for final sum and average
			counter++;
			sum = sum + new_value;
		}
		
	}while(c != EOF);
	
	//print final sum and average
	fprintf(output_file,"The sum is %f \n The average is %f", sum, sum/counter);
	
	fclose(input_file);
	fclose(output_file);
	return 0;

}
