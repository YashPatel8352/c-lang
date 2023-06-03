//enter two value and fine its multiplication is divisible by its additin or n
#include<stdio.h>
int main()
{
	int b,c,d,e;
	printf(" enter b=");

	scanf("%d",&b);
	printf(" enter c=");
	scanf(" %d",&c);

	d=b*c;
	e=b+c;

	printf("%d \n",d);
	printf("%d \n",e);	
	if(d%e==0)
	{
		printf("this value was divisiable by %d,e");

	}
	else
	{
		printf("this value was not divisable by %d",e);
	}	     
	
}


 

   enter b=20
   enter c=21
420
41
this value was not divisable by 41