#include<stdio.h>
int main()
{
	int n;
	
	printf("enter number with 2 digits:");
	scanf("%d",&n);
    int a = n/10;
    int b=n%10;
    int C=a+b;
	printf("%d",C);
	return 0;
}
//56=>5+6
