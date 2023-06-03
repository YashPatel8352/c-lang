//enter one value and find its devisible by 5 or not.
#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter a=");
	scanf("%d",&a);
	
	if(a%5==0)
	{
	    printf("value yes");
	}
	else
	{
		printf("value no");
	}
}


output

 enter a=105
value yes


 enter a=102
value no