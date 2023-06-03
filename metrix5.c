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
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				d += a[j][j];
			}
			if (i < j)
			{
				b += a[i][j];
			}
			if (i > j)
			{
				c += a[i][j];
			}
		}
		printf("\n");
	}
	printf("\ttotal diagonal=%d",d );
	printf("\n\tupper triangle=%d",b);
	printf("\n\tlower triangle=%d",c);
}
