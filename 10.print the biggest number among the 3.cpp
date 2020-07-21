#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nenter the 1st number :");
	scanf("%d",&a);
	printf("\nenter the 2nd number :");
	scanf("%d",&b);
	printf("\nenter the 3rd number :");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		printf("\n%d is bigger",a);
	}
	if(b>c)
	{
		if(b>a)
		printf("\n%d is bigger",b);
	}
	if(c>a)
	{
		if(c>b)
		printf("\n%d is bigger",c);
	}
	
	
}

