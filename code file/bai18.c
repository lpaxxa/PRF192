//find the largest number among the 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("enter the third number:");
	scanf("%d",&c);
	if(b<a>c)
	printf("%d",a);
	else if (a<b>c)
	printf("%d",b);
	else 
	printf("%d",c);
	
	return 0;
}

