#include <stdio.h>
int main()
{
	float a,b,s,d,p,q;
	printf("enter a:");
	scanf("%f", &a);
	printf("enter b:");
	scanf("%f",&b);
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	printf("%f,%f,%f,%f", s,d,p,q);
	return 0;
	}
