#include<stdio.h>
#include<conio.h>
main()
{
	float Radius,pi=3.14,a,p;
	printf("enter the radius of the circle=");
	scanf("%f",&Radius);
	a=pi*Radius*Radius;
	p=2*pi*Radius;
	printf("area of circle:%f\nperimeter of circle:%f",a,p);
}
