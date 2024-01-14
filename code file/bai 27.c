#include<stdio.h>
int main()
{
	int a;
	printf("enter the temperature:");
	scanf("%d",&a);
	if (a<0)
	{
		printf("Freezing weather:%d",a);
	}
	else if (a>0&&a<10)
	{

		printf("Very Cold Weather%d",a);
	}
	else if (a>10&&a<20)
	{
		printf("Cold weather:%d",a);
	}
	else if (a>20&&a<30)
	{
		
		printf("Normal in temp");
	}
	else if(a>30&&a<40)
	{
	
		printf("Its hot");
	}
	else if (a==40&&a>40)
	{
		
		printf("its very hot");
	}
	return 0;
}
