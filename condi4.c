//enter one value and find its devisible by 5 and 3 or not.
#include<stdio.h>
int main() 
{
	int a;
	printf(" enter a=");
	scanf("%d",&a);
	
	if(a%15==0)
	{
	    printf("value yes");
	}
	else(a%3==0);
	{
		printf("value no");
	}
}


output
 
  enter a=25
  value no