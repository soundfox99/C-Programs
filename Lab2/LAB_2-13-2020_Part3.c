#include<stdio.h>
#include<math.h>

int main(){
	unsigned char h = 0;
	unsigned char mask =0;
	unsigned char maskInv;
	int p=0;
	int n=0;
	int i =0;
	char user_input;
	
	//get user's inputs
	printf("Enter a hex value: \n");
	scanf("%x", &h);
	
	printf("Enter an integer value for p: \n");
	scanf ("%d", &p);
	p = p+1;
	
	printf("Enter an interger value for n: \n");
	scanf ("%d", &n);
	
	printf("Enter a character (S,R,F,D, or I): \n");
	getchar();
	scanf("%c", &user_input);
	
//	for (i=0;i<n;i++){
//		mask = (i<<i) | mask; // this gives you zeros with n 1s in LSB
//	}
//	
//	mask << (p-n+1);
//	maskInv = mask ^ 0xff;
	
	//choose what to do from user_input
	switch (user_input){
	
		case 'S':{
			
			mask = (pow(2,p)-pow(2,(p-n)));
		 	h = h | mask; 
			break; // sets n bits to one starting from p
		}
		case 'R':{
		
			mask = (0xff-(pow(2,p))+(pow(2,(p-n))));
			h = h & mask; 
			break; // sets n bits to one starting from p
	}
		case 'F':{
			mask = ((pow(2,p))-(pow(2,p-n)));
			h = h ^ mask;
			break;
		} 
		
		case 'D': printf("Value of the hex number is %d", h); break; //display variable
		case 'I': scanf("%x"), h; break; //read new input
		default: printf("You entered an invalid number"); break; // default case
	}
	
	//print results
	printf("Your result is: %x", h);
	
	return 0;
}
