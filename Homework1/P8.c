#include<stdio.h>

int main(){
	float radius, circ, area;
	
	printf ("Please enter a radius: ");
	scanf ("%f", &radius);
	
	circ = radius * 2 * 3.14;
	area = radius * radius * 3.14;
	
	printf("Your circumference is: %f \n", circ);
	printf("Your area is: %f \n", area);
}
