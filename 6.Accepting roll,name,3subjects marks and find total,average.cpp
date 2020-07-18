#include<stdio.h>
#include<conio.h>
int main()
{
	int Roll,math,social,science,Total;
	char name[20];
	float Average;
	printf("Roll:\nmath:\nsocial:\nscience:\nname:\nPlease provide the details one by one respectively\n");
	scanf("%d%d%d%d%s",&Roll,&math,&social,&science,name);
	Total=math+social+science;
	Average=(float)Total/3;
	printf("Roll=%d\nmath=%d\nsocial=%d\nscience=%d\nTotal=%d\nname:%s\nAverage=%6.4f",Roll,math,science,social,Total,name,Average);
return(0);
}
	 

