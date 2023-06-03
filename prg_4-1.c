#include<stdio.h>
int main()
{
	
	float unit,amount;

	printf("enter your electricity unit =");
	scanf("%f",&unit);
	if(unit<=100)
	{
		amount=50+(unit*0.6);
	}
	else if(unit > 101 && unit<=300)
	{
		printf("\n unit > 101 && unit<=300 \n");
		amount=110+((unit-100)*0.8);
	}
	else 
	{
		amount=50+60+160+((unit-300)*0.9);
	}
	if(amount>=301)
	{
		amount=amount*1.15;
	}
		printf("your amount bill is =%f",amount);
		return 0;
}



