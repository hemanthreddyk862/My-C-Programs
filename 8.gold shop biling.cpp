#include<stdio.h>
#include<conio.h>
main()
{
	int item_code;
	char item_name[20],ex_name[20];
	float wgt0,ppg0,wgt1,ppg1,amt0,amt1,nb;
	printf("item code :");
	scanf("%d",&item_code);
	printf("item name :");
	scanf("%s",&item_name);
	printf("enter item weight in grams :");
	scanf("%f",&wgt0);
	printf("enter the price per gram :");
	scanf("%f",&ppg0);
	printf("enter name of exchange item :");
	scanf("%s",&ex_name);
	printf("enter item weight in grams :");
	scanf("%f",&wgt1);
	printf("enter the price per gram :");
	scanf("%f",&ppg1);
	amt0=wgt0*ppg0;
	amt1=wgt1*ppg1;
	nb=amt0-amt1;
	printf("\nKalyan Gold Enterprise");
	printf("\nBill INFO");
	printf("\nITEM CODE :%d",item_code);
	printf("\nNAME OF BUYING ITEM:%s",item_name);
    printf("\nWEIGHT IN GRAMS:%.2f",wgt0);
	printf("\nPRICE PER GRAM:%f",ppg0);
	printf("\nTOTAL AMOUNT OF EXCHANGE ITEM:%f",amt0);
	printf("\nNAME OF EXCHANGE ITEM:%s",ex_name);
    printf("\nWEIGHT IN GRAMS:%f",wgt1);
	printf("\nPRICE PER GRAM:%f",ppg1);
	printf("\nTOTAL AMOUNT OF EXCHANGE ITEM:%f",amt1);
	printf("\nNET BILL:%f",nb);
	printf("\n*****THNAK YOU*****");
	printf("\n****VISIT AGAIN*****");
}
