#include<stdio.h>
int main()
{
	float length,width,area,perimeter;
	printf("enter length:");
	printf("enter width:");
	scanf("%f%f", &length, &width);
	area=length*width;
	perimeter=(length*width)/2;
	printf("%.2f%.2f",area,perimeter);
	return 0;
}
