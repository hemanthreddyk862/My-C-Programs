#include<stdio.h>
#include<conio.h>
main()
{
	float a,p,b,h,l,t;
	printf("enter values of b,h,l:");
	scanf("%f%f%f",&b,&h,&l);
	t=0.5;
	a=t*b*h;
	p=b+h+l;
	printf("a=%f\nb=%f",a,p);
}
