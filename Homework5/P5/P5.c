#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	FILE *input_file, *output_file;
	float current_value = 0, inputArray[6][6];
	int pos_counter=0, neg_counter=0, zero_counter=0, row=0, col=0;
	
	input_file = fopen("P5_in.txt", "r");
	if(input_file == NULL){
		printf("Not able to open input file");
	}
	
	output_file = fopen("P5_out.txt", "w");
	if(output_file == NULL){
		printf("Not able to open output file");
	}
	
	for(col=0;col<6;col++){
		for(row=0;row<6;row++){
			fscanf(input_file, "%f", &inputArray[row][col]);
		}
	}
	
//	for(col=0;col<6;col++){
//		for(row=0;row<6;row++){
//			printf(inputArray[row][col]);
//		}
//	}
	
	for(col=0;col<6;col++){
		for(row=0;row<6;row++){
			if(inputArray[row][col] > 0){
				pos_counter++;
			}else if (inputArray[row][col] < 0){
				neg_counter++;
			}else if (inputArray[row][col] == 0){
				zero_counter++;
			}
		}
	}
	
	printf("The number of positive numbers in the array are %d", pos_counter);
	printf("\nThe number of negatives numbers in the array are %d", neg_counter);
	printf("\nThe number of zeros in the array are %d", zero_counter);
	
	fclose(input_file);
	fclose(output_file);
	
	return 0;
	
}
