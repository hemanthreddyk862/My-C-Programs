#include<stdio.h>
main()
{
	int a;
	printf("\nenter a number :");
	scanf("%d",&a);
	if(a<10)
	printf("\n%d is one digit",a);
	if(a>=10&&a<100)
	printf("\n%d is Two digit",a);
	if(a>=100&&a<1000)
	printf("\n%d is three digit",a);
	if(a>=1000)
	printf("%d is 4 or more digit",a);
}
