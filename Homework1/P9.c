#include<stdio.h>

int main(){
	float fahr, centi;
	
	printf ("Please enter a Fahrenheit Degree: ");
	scanf ("%f", &fahr);
	
	centi = (5*(fahr-32))/9;
	
	printf ("Your centigrade degree is %f", centi);
}
