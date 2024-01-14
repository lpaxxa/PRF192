#include<stdio.h>
int main()
{
	int minute,hour,sum;
	printf("enter minute:");
	scanf("%d",&minute);
	hour=60/minute;
	sum= hour+minute;
	printf("%d",sum);
	return 0;
	
}
