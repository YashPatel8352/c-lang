#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter a=");
	scanf("%d",&a);

	printf(" enter b=");
	scanf("%d",&b);

	printf(" enter c=");
	scanf("%d",&c);
	
	if(a>b)

	{
		if(a>c)
		{	
			printf(" %d",a);
		}	
     		 else
	      {
			printf(" %d",c);
		}
	}
	
	else
	{
		if(c>b)
		{
			printf("%d",c);
		}
		else
		{
			printf("%d",b);
		}

	}

}


output


 enter a=12
 enter b=36
 enter c=20
36