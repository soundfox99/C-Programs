#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	//initiate varaibles
	FILE *input_file;
	float batch_num=1, temp_num=1, pres_num=1, time_num=1;
	float prev_batch_num=0, prev_temp_num=0, prev_pres_num=0, prev_time_num=0;
	char batch[20], temperature[20], C[20], pressure[20], psi[20], dwell[20], time[20], s[20], line_end;
	int acc_num, counter, acc_array[10], unacc_array[10]; //keep track of acceptable conditions
	
	input_file = fopen("suture.txt", "r");
	
	//check file
	if(input_file == NULL){
		printf("Can not open input file");
	}
	
	for(counter=0;counter<10;counter++){
		acc_array[counter]=0;
		unacc_array[counter]=0;
	}
	
	//batch: 1 temperature: 166C pressure: 66psi dwell time: 2.5s
	
	//Asses Data
	while(!((prev_batch_num == batch_num && prev_temp_num == temp_num && prev_pres_num == pres_num && prev_time_num == time_num))){
		prev_batch_num = batch_num;
		prev_temp_num = temp_num;
		prev_pres_num = pres_num;
		prev_time_num = time_num;
		
		fscanf(input_file,"%s %f %s %f %s %s %f %s %s %s %f %s",batch,&batch_num,temperature,&temp_num,C,pressure,&pres_num,psi,dwell,time,&time_num,s);
		
		if(prev_batch_num == batch_num && prev_temp_num == temp_num && prev_pres_num == pres_num && prev_time_num == time_num){
			break;
		}
		
		//printf("%s %f %s %f %s %s %f %s %s %s %f %s\n",batch,batch_num,temperature,temp_num,C,pressure,pres_num,psi,dwell,time,time_num,s);
		
		//alter the arrays which we can't do because batch_num is a float
		acc_num = (int)(batch_num);
		
		if(temp_num>=150 && temp_num<=170){
			if(pres_num>=60&&pres_num<=70){
				if(time_num>=2 && time_num<=2.5){
					acc_array[acc_num] = acc_array[acc_num] + 1;
				}else{
					unacc_array[acc_num] = unacc_array[acc_num] + 1;
				}
			}else{
				unacc_array[acc_num] = unacc_array[acc_num] + 1;
			}
		}else{
			unacc_array[acc_num] = unacc_array[acc_num] + 1;
		}
		
		
	}
	
//	for(counter=0;counter<10;counter++){
//		printf("%d ", acc_array[counter]);
//	}
//	
//	printf("\n");
//	
//	for(counter=0;counter<10;counter++){
//		printf("%d ", unacc_array[counter]);
//	}

	//determine which batch had the most aceptable and unacceptable entries
	
	float most_acc_value=0, most_unacc_value=0;
	float most_acc_index=0, most_unacc_index=0;
	
	for(counter=0;counter<10;counter++){
		if(most_acc_value<acc_array[counter]){
			most_acc_value = acc_array[counter];
			most_acc_index = counter;
		}
	}
	
	for(counter=0;counter<10;counter++){
		if(most_unacc_value<unacc_array[counter]){
			most_unacc_value = unacc_array[counter];
			most_unacc_index = counter;
		}
	}
	
//	printf("\n%f",most_acc_index);
//	printf("\n%f",most_unacc_index);
	
	//reset all the variables and file pointer
	batch_num=1, temp_num=1, pres_num=1, time_num=1, prev_batch_num=0, prev_temp_num=0, prev_pres_num=0, prev_time_num=0;
	rewind(input_file);
	
	printf("batch %f has the most lines with acceptable parameters, they are:\n", most_acc_index);
	//Output The most acceptable
	while(!((prev_batch_num == batch_num && prev_temp_num == temp_num && prev_pres_num == pres_num && prev_time_num == time_num))){
		prev_batch_num = batch_num;
		prev_temp_num = temp_num;
		prev_pres_num = pres_num;
		prev_time_num = time_num;
		
		fscanf(input_file,"%s %f %s %f %s %s %f %s %s %s %f %s",batch,&batch_num,temperature,&temp_num,C,pressure,&pres_num,psi,dwell,time,&time_num,s);
		
		if(prev_batch_num == batch_num && prev_temp_num == temp_num && prev_pres_num == pres_num && prev_time_num == time_num){
			break;
		}
		
		if(batch_num==most_acc_index){
			if(temp_num>=150 && temp_num<=170){
				if(pres_num>=60&&pres_num<=70){
					if(time_num>=2 && time_num<=2.5){
						printf("batch: %f temperature: %fC pressure: %fpsi dwell time: %fs\n",batch_num,temp_num,pres_num,time_num);
					}
				}
			}
		}
	}
	
	printf("\n");
	
	//reset all the variables and file pointer
	batch_num=1, temp_num=1, pres_num=1, time_num=1, prev_batch_num=0, prev_temp_num=0, prev_pres_num=0, prev_time_num=0;
	rewind(input_file);
	
	printf("batch %f has the most lines with unacceptable parameters, they are:\n", most_unacc_index);
	//Output The most unacceptable
	while(!((prev_batch_num == batch_num && prev_temp_num == temp_num && prev_pres_num == pres_num && prev_time_num == time_num))){
		prev_batch_num = batch_num;
		prev_temp_num = temp_num;
		prev_pres_num = pres_num;
		prev_time_num = time_num;
		
		fscanf(input_file,"%s %f %s %f %s %s %f %s %s %s %f %s",batch,&batch_num,temperature,&temp_num,C,pressure,&pres_num,psi,dwell,time,&time_num,s);
		
		if(prev_batch_num == batch_num && prev_temp_num == temp_num && prev_pres_num == pres_num && prev_time_num == time_num){
			break;
		}
		
		if(batch_num==most_unacc_index){
			if(temp_num>=150 && temp_num<=170){
				if(pres_num>=60&&pres_num<=70){
					if(time_num>=2 && time_num<=2.5){
					}
					else{
						printf("batch: %f temperature: %fC pressure: %fpsi dwell time: %fs\n",batch_num,temp_num,pres_num,time_num);
					}
				}
				else{
					printf("batch: %f temperature: %fC pressure: %fpsi dwell time: %fs\n",batch_num,temp_num,pres_num,time_num);
				}
			}
			else{
				printf("batch: %f temperature: %fC pressure: %fpsi dwell time: %fs\n",batch_num,temp_num,pres_num,time_num);
			}
		}
	}

	
	fclose(input_file);
	return 0;
	
}
