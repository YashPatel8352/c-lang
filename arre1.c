#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,j;
	for(i=0;i<=4;i++)
	{
		printf("enter a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<=4;j++)
	{
		{
			printf("ernter b[%d] : ",j+1);
			scanf("%d",&b[j]);
		}

	}
	printf("\n      array           \n");
	for(i=0;i<=5;i++)
	{
		printf("\n a[%d] : %d",i+1,a[i]);
	}
	for(j=0;j<=5;j++)
	{
		printf("\n a[%d] : %d",j+1,a[j]);

	}
		return 0;
}