#include <stdio.h>
#include <stdlib.h>

int main (){
	//initiate variables
	FILE *input_file, *output_file;
	
	int zero_appear=0;
	float avg_pos = 0, count_pos = 0, sum_pos=0;
	float avg_neg = 0, count_neg = 0, sum_neg=0;
	float current_num = 0, counter = 0;
	
	//initiate files
	input_file = fopen("in1.txt", "r");
	if (input_file == NULL){
		printf("Can not open input file");
	}
	
	output_file = fopen("out1.txt", "w");
	if(output_file == NULL){
		printf("Can not access output file");
	}
	
	//run throught the input file
	for(counter=0; counter<15; counter++){
		fscanf(input_file, "%f", &current_num);
		//printf("%f : %f\n", counter, current_num);
		
		
		//sort the current number based off of negative and positive
		if(current_num > 0){
			count_pos++;
			sum_pos = sum_pos + current_num;
		}else if(current_num < 0){
			count_neg++;
			sum_neg = sum_neg + current_num;
		}else if(current_num == 0){
			zero_appear = 1;
		}
	}
	
	//calculate the results
	avg_pos = (sum_pos/count_pos);
	avg_neg = (sum_neg/count_neg);
	
	fprintf(output_file,"The average of the positive numbers is %f", avg_pos);
	fprintf(output_file,"\nThe average of the negative numbers is %f", avg_neg);
	
	if(zero_appear == 1){
		fprintf(output_file,"\nThe average of the zero is 0");
	}
	
	//close files
	fclose(input_file);
	fclose(output_file);
	
	//return a 0
	return 0;
	
}
