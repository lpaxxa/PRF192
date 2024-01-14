//solve linear equation ax + b = 0
#include<stdio.h>
int main()
{
	float a,b,x;
	printf("enter a,b:");
	scanf("%f%f",&a,&b);
	if (a==0)
	{
		if(b==0)
		printf("vo so nghiem");
		else
		printf("vo nghiem");
	}
	else
	x=-b/a;
	printf("co nghiem:%f",x);
	return 0;
}
