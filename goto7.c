#include<stdio.h>
int main()
{
	int i=5,j=5;
	
		if(i<=5)
		{
			i=1;
			x:
			if(i>=1)
			{
			printf("* ");
			i++;
			goto x;
		}
				printf("\n");
				j=5;
				y:
				if(j>=i)
				{
					printf(" ");
					j++;
					goto y;
				}
				
		}
	return 0;
}