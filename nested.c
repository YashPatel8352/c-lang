#include<stdio.h>
int main()
{
	int a,b,c;

	printf("enter a=");
	scanf("%d",&a);

	printf(" enter b=");
	scanf("%d",&b);

	printf(" enter c=");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n a (%d) is largest...",a);
	}
	
	else
	{
		if(b>c)
		{
			printf("\n b (%d) is largest...",b);
		}
		else
		{
			printf("\n c (%d) is largest...",c);
		}


	}
}

output


enter a=20
 enter b=30
 enter c=25

 b (30) is largest...