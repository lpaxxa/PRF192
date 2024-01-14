//Q1.Write a program to input number of days from user and convert it to years, weeks and days.
#include<stdio.h>
const PI=3.14;
int main()
{
//	int days, week, year;
//	printf("enter number of days:");
//	scanf("%d",&days);
//	year= days/365;
//	week= (days%365)/7;
//	days=((year*365)+week*7);
//	printf("year:%d, week:%d, days:%d", year, week, days);
//	
	


//Q2.Write a program to enter length in centimeter and convert it into meter and kilometer.


//	float length,meter,kilometer,centimeter;
//	printf("enter length:");
//	scanf("%f",&length);
//	meter= length*100;
//	kilometer=length*1000;
//	printf("meter:%f, kilometer:%f",meter,kilometer);
//	
//Write a program to calculate the perimeter and area of shapes: triangles, squares, 
//rectangles and circles with the information that needs to be entered from the keyboard.

	float length, width,height,side,base,Atriangle, Ptriangle,Prectangle, Arectangle, Asquare, Psquare,Acircle,Pcircle,radius;
	printf("enter length:");
	scanf("%f", &length);
	printf("enter width:");
	scanf("%f",&width);
	printf("enter height:");
	scanf("%f",&height);
	printf("enter base:");
		scanf("%f",&base);
	printf("enter side:");
		scanf("%f",&side);
	printf("enter radius:");
		scanf("%f",&radius);
	Atriangle= (base*height)/2;
	Ptriangle= length + width + base;
	printf("Atriangle:%f, Ptriangle:%f", Atriangle , Ptriangle );
	Arectangle=length*width;
	Prectangle=(length*width)/2;
	printf("Arectangle:%f,Prectangle:%f",Arectangle, Prectangle);
	Asquare= side*side;
	Psquare= 4*side;
	printf("Asquare:%f,Psquare:%f",Asquare, Psquare);
	Acircle=PI*radius*radius;
	Pcircle=2*PI*radius;
	printf("Acircle:%f,Pcircle:%f",Acircle,Pcircle);
	
Write a program to check number is positive, negative or zero.
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
