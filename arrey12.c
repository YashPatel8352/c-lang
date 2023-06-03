#include <stdio.h>
int main()
{
	int i, j, a[5][5], d = 0, b = 0, c = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" ENTER a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if(a[i][j]==0)
			printf("\t ");
			
			else
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}	
