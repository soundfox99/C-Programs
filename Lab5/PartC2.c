#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	
	//used to access the two files
	FILE  *input_file, *output_file;
	char c, input_string[32], number_string[32];
	int index=0, counter=0;
	float new_value=0, sum=0, exponent=0;
	
	input_file = fopen("PC2_in.txt", "r");
	// "r" -- read mode
	
	if(input_file == NULL){
		printf("File PC2_in.txt cannot be opened. \n");
		exit(1);
	}
	
	output_file = fopen("PC2_out.txt","w");
	// "w" -- wrtie mode
	if(output_file == NULL){
		printf("File PC2_out.txt cannot be opened. \n");
		exit(1);
	}
	
	c = fgetc(input_file);
	
	
	while(c != EOF){	//check to see if c is the end of the file
		
		//+, -, *, /, %, @, &, ^
		//PLUS for + in the input file, MINUS for – in the input file, MULTIPLY, DIVIDE, MODULO, AT, BITWISE AND, BITWISE XOR
		//++ (INCREMENT), -- (DECREMENT), = (ASSIGN), += (ADD ASSIGN), *= (MULTIPLY ASSIGN), == (EQUAL)
		
		if(c == '+'){
			//PLUS if only one +
			//ADD ASSIGN if +=
			//INCREMENT if ++
			c = fgetc(input_file);
			if(c == '='){
				fprintf (output_file, "ADD ASSIGN\n");
				c = fgetc(input_file);
			}
			else if(c == '+'){
				fprintf (output_file, "(INCREMENT)\n");
				c = fgetc(input_file);
			}
			else{
				fprintf(output_file, "ADD\n");
			}
		}
		else if(c == '-'){
			c = fgetc(input_file);
			if(c == '-'){
				fprintf (output_file, "(DECREMENT)\n");
				c = fgetc(input_file);
			}
			else{
				fprintf(output_file, "MINUS\n");
			}
		}
		else if(c == '*'){
			c = fgetc(input_file);
			if(c == '='){
				fprintf (output_file, "(MULTIPLY ASSIGN)\n");
				c = fgetc(input_file);
			}
			else{
				fprintf(output_file, "MULTIPLY\n");
			}
		}
		else if(c == '/'){
			fprintf (output_file, "DIVIDE\n");
			c = fgetc(input_file);
		}
		else if(c == '%'){
			fprintf (output_file, "MODULO\n");
			c = fgetc(input_file);
		}
		else if(c == '@'){
			fprintf (output_file, "AT\n");
			c = fgetc(input_file);
		}
		else if(c == '&'){
			fprintf (output_file, "BITWISE AND\n");
			c = fgetc(input_file);
		}
		else if(c == '^'){
			fprintf (output_file, "BITWISE XOR\n");
			c = fgetc(input_file);
		}	
		else if(c == '='){
			c = fgetc(input_file);
			if(c == '='){
				fprintf (output_file, "EQUAL\n");
				c = fgetc(input_file);
			}
			else{
				fprintf(output_file, "ASSIGN\n");
			}
		}	
		else if(c == '.'){
			fprintf (output_file, "(DOT)\n");
			c = fgetc(input_file);
		}
		else if(c == ','){
			fprintf (output_file, "(COMMA)\n");
			c = fgetc(input_file);
		}
		else if(c == ';'){
			fprintf (output_file, "(SEMICOLON)\n");
			c = fgetc(input_file);
		}
		else if(c == ':'){
			fprintf (output_file, "(COLON)\n");
			c = fgetc(input_file);
		}
		else if(c == '_'||(c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			while(c == '_'||(c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
				
				if(c>='a'&&c<='z'){
					c = (c&~(0x20));
				}
				
				index = 0;
		if((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')||(c=='e')||(c=='E')){
			while((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')||(c=='e')||(c=='E')){
				//printf("%c", c);
				input_string[index] = c;
				c = fgetc(input_file);
				
				index++;
				input_string[index] = '\0';
				
				if((c=='e')||(c=='E')){
					break;
				}
		
			}
			new_value = atof(input_string);
			if((c=='e')||(c=='E')){
					c = fgetc(input_file);
					if((c>='0'&&c<='9')){
						index = 0;
						input_string[0] = '\0';
						while((c == '+')||(c == '-')||(c == '.')||(c>='0'&&c<='9')){
							input_string[index] = c;
							c = fgetc(input_file);

							index++;
							input_string[index] = '\0';
						}
						
						exponent = atof(input_string);
						
						new_value = new_value * pow(10, exponent);
					}
				}
				
			fprintf(output_file,"%f\n", new_value);
			counter++;
			sum = sum + new_value;
			
		}
				
				fputc(c,output_file);	//wrtie out c into the output file
				c = getc(input_file);
				
			}
		
		fprintf (output_file, "\n");	
		}	
		else{
			c = fgetc(input_file);	
		}	
	
	}
	
	fprintf(output_file,"\nThe sum is %f \nThe average is %f", sum, sum/counter);
	
	fclose(input_file);
	fclose(output_file);
	
	return 0;	
}
