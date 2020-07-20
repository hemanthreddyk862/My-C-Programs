#include<stdio.h>
#include<conio.h>
int main()
{
	int empid;
	char name[20];
	float TA,DA,HRA,Basic_Pay,PF,IT,GROSS_PAY,NET_PAY;
	printf("EMPID:");
	scanf("%d",&empid);
	printf("\nName:");
	scanf("%s",&name[20]);
	printf("\nBasic_Pay:");
	scanf("%f",&Basic_Pay);
	printf("\nTA:");
	scanf("%f",&TA);
	printf("\nDA:");
	scanf("%f",&DA);
	printf("\nHRA:");
	scanf("%f",&HRA);
	printf("\nPF:");
	scanf("%f",&PF);
	printf("\nIT:");
	scanf("%f",&IT);
	GROSS_PAY=Basic_Pay+TA+DA+HRA;
	NET_PAY=GROSS_PAY-(PF+IT);
	printf("\nEmployee ID:%d",empid);
	printf("\nName:%s",name);
	printf("\nBasic Pay:%f",Basic_Pay);
	printf("\nTA:%f",TA);
	printf("\nDA:%f",DA);
	printf("\nHRA:%f",HRA);
	printf("\nPF:%f",PF);
	printf("\nIT:%f",IT);
	printf("\nNET PAY:%f",NET_PAY);
	printf("\nGROSS PAY:%f",GROSS_PAY);
	return(0);
}
