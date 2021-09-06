#include <stdio.h>
#include <stdlib.h>

int main () {
	//initiate varaibles
	FILE *input_file, *output_file;
	
	float small_1=0, small_2=0, small_3;
	float current_num = 0, temp=0, counter=0;
	
	//initiate files
	input_file = fopen("in3.txt", "r");
	if (input_file == NULL){
		printf("Could not open input file");
	}
	
	output_file = fopen("out3.txt", "w");
	if (output_file == NULL){
		printf("Could not open output file");
	}
	
	for(counter=0; counter<20; counter++){
		fscanf(input_file, "%f", &current_num);
		
		if(counter == 0){
			small_1 = current_num;
			small_2 = current_num;
			small_3 = current_num;
		}
		
		if(current_num < small_3){
			small_3 = current_num;
		}
		
		if(small_3 < small_2){
			temp = small_2;
			small_2 = small_3;
			small_3 = temp;
		}
		
		if(small_2 < small_1){
			temp = small_1;
			small_1 = small_2;
			small_2 = temp;
		}
		
		if(small_3 < small_1){
			temp = small_1;
			small_1 = small_3;
			small_3 = temp;
		}	
		
		
	}
	
	//print results to output files
	fprintf(output_file, "The smallest number is %f\n", small_1);
	fprintf(output_file, "The second smallest number is %f\n", small_2);
	fprintf(output_file, "The third smallest number is %f\n", small_3);
	
	//close files
	fclose(input_file);
	fclose(output_file);
	
	//return 0
	return 0;
	
}
