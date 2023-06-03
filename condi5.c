//enter two value and find its multiplication is divisible by 7 and 3 or not.
#include<stdio.h>
int main() 
{
	int a,b,z;
	printf(" enter a=");
	scanf("%d",&a);

	printf(" enter b=");
	scanf("%d",&b);
	
	z=a*b;

	if(z%21==0)
	{
	    printf(" yes 3 and 7");
	}
	else
	{
		printf(" not 3 and 7");
	}
	return 0;
}



output

 enter a=32
 enter b=98
 not 3 and 7



 