#include<stdio.h>
//#define PI 3.14
const PI=3.14;
int main()
{
	float r;
	printf("enter radius:");
	scanf("%f",&r);
	float P=2*PI*r;
	float D=r*2;
	float a=PI*r*r;
	printf("diameter: %f, perimeter: %f, area:%f",P,D,a);
	return 0;
	
}
