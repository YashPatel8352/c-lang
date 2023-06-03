#include<stdio.h>
int main()
{
	int PRODUCTNAME,PRICE,QTY,RATE,DISCOUNT,RATEAD,GST,BILLAMOUNT;
	printf("enter PRODUCT NAME :");
	scanf("%d",&PRODUCTNAME);
	printf("enter PRICE :");
	scanf("%d",&PRICE);
	printf("enter QTY :");
	scanf("%d",&QTY);
	RATE=PRICE*QTY;
	DISCOUNT=RATE*0.10;
	RATEAD=RATE-DISCOUNT;
	GST=RATEAD*0.18;
	BILLAMOUNT=RATEAD+GST;
	printf("\n       PRODUCTNAME\tPRICE\tQTY\tRATE\tDISCOUNT\tRATEAD\tGST\tBILLAMOUNT      ");
	printf("\n          %d       \t %d  \t %d\t %d \t %d     \t %d  \t %d \t %d",PRODUCTNAME,PRICE,QTY,RATE,DISCOUNT,RATEAD,GST,BILLAMOUNT);
	return 0;
}