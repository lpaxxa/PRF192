//Write a program to check number is positive, negative or zero.
#include<stdio.h>
int main()
{

int number;
printf("enter a number:");
scanf("%d",&number);
if (number>0)
printf("the number is positive");
else if(number<0)
printf("the number is negative");
else
printf("the number is zero");
return 0;
}
