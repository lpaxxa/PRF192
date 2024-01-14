//solve quadratic equation ax2 + bx +c=0
#include<stdio.h>
#include<math.h>
int main()
{	
	float x1,x2;
int a,b,c;
	float d=b*b-4*a*c;
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if (a==0)
	{
		printf("no solution");
	//bx+c
    }   
    else if (d<0)
	{
		printf("no solution");
	}
	else if (d==0)
	{
		x1=-b/2*a;
		printf("%f",x1);
    }
	else 
	{
		
		x1= (-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("%f%f",x1,x2);
	}
	
	

//	a = 1;
//	
//	printf("%d", a==1 ? 2: 3);

	
	return 0;
}

