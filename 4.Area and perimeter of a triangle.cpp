#include<stdio.h>
#include<conio.h>
main()
{
	float a,p,b,h,l;
	printf("enter values of b,h,l:");
	scanf("%f%f%f",&b,&h,&l);
	a=0.5*b*h;
	p=b+h+l;
	printf("a=%f\nb=%f",a,p);
}
