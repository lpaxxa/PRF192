#include<stdio.h>
int main()
{
	float hour,minute,second, sum;
	printf("enter hour:");
	scanf("%f",&hour);
    printf("enter minute:");
	scanf("%f",&minute);
	printf("enter second:");
	scanf("%f",&second);
	minute=minute * 60;
	hour=3600/60*60*hour;
	sum=hour+minute+second;
	printf("%f",sum);
	return 0;
}
