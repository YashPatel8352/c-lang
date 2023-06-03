#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		{
			printf("ernter b[%d] : ",i+1);
			scanf("%d",&b[i]);
		}

	}
	printf("\n--------array---------\n");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : %d""\t b[%d] : %d",i+1,a[i],i+1,b[i]);
	}
		return 0;
}






