#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
printf("enter a,b:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a:%d\nb:%d",a,b);	
}
