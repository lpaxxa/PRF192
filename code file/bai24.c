//find a leap year, divisible by 4, not by 100.
#include<stdio.h>
int main()
{
	int a;
	printf("enter year:");
	scanf("%d",&a);
	if ((a%4==0&&a%100!=0)||(a%400==0))
	//%  chia het cho #
	//!= khac
	// && = va
	// || = hoac
	printf("this is a leap year");
	else 
	printf("this is not a leap year");
	
	
	return 0;
	
}
