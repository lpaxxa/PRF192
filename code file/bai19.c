// input 3 numbers and write a program to order them in ascending order
#include<stdio.h>
int main()
{
	int a,b,c, min, max;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	//find max
	if (a>b)
	{
//		if (a>c)
//	    	max=a;
//		else
//		    max=c;
//		}
//		else
//		{
//		if (b>c)
//			max=b;
//		else
			max=c;
			max=(a>c)?a:c;
	}
		//timf min
	if (a<b)
	{
		if(a<c)
			min=a;
		else
		    min=c;
	}
	else
	{
		if (b<c)
		    min=b;
		else
			min=c;
		}
		
		int m=a+b+c-max-min;
	printf("%d%d%d",min,m,max);
	return 0;
	
}
