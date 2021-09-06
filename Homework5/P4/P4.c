#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	//initate output file
	FILE *output_file;
	
	//initiate variables
	output_file = fopen("out4.txt", "w");
	
	float time=0, increment=0, ending_time=0, velocity=0, altitude=0;
	
	//open/create output file
	if (output_file == NULL){
		printf("Can not access output file");
	}
	
	//get user inputs
	printf("Starting Time: ");
	scanf("%f", &time);
	
	printf("Time Increment: ");
	scanf("%f", &increment);
	
	printf("Ending Time: ");
	scanf("%f", &ending_time);
	
	//calculate the results
	for(time=time; time <= ending_time; time=time+increment){
		
		//calculate the altitude and velocity
		altitude = (-0.12)*(pow(time, 4)) + (12)*(pow(time, 3)) + (-380)*(pow(time, 2))+(4100*time)+(220);
		velocity = (-0.48)*(pow(time, 3)) + (36)*(pow(time, 2))+((-760)*time)+(4100);
		
		//print results
		fprintf(output_file, "time:%f altitude:%f velocity:%f\n", time, altitude, velocity);
	}
	
	//close file
	fclose(output_file);
	
	//return a 0
	return 0;
}
