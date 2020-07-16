#include<stdio.h>
#include<conio.h>
main()
{
	float l,b,a,p;
	printf("Enter lenght of rectangle: enter breadth of rectangl:");
	scanf("%f%f",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf(" area of rectangle %f",a);
	printf("\n perimeter of rectangle %f",p);
}
