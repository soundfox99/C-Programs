#include<stdio.h>
#include<math.h>

int main (){
	unsigned int value1, value2;
	unsigned char mask1, mask2;
	int p=0, n=0;
	
	//get user's inputs
	printf("Please enter your first hex value: \n"); 
	scanf("%x", &value1);

	
	printf ("Enter your second hex value: \n");
	scanf("%x", &value2);
	
	printf("Enter an int value p: \n");
	scanf ("%d", &p);
	
	printf("Enter an int value n: \n");
	scanf ("%d", &n);
	
	//calculate results

	mask1=(pow(2,n)-1);
	//printf("Mask1 is equal to %x\n", mask1);
	value2 = (value2&mask1);
	//printf("Value2 is equal to %x\n", value2);
	mask1 = (value2<<(p-n));
	//printf("Mask1 is equal to %x\n", mask1);
	mask2 = (0xff-(pow(2,p)-pow(2,(p-n))));
	//printf("Mask2 is equal to %x\n", mask2);
	value1 = (value1&mask2);
	//printf("value1 is equal to %x\n", value1);
	value1 = value1 | mask1;
	//printf("value1 is equal to %x\n", value1);
	
	//print results
	printf("Your result is %x", value1);
	
	return 0;
}
