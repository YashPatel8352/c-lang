#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i;
	for(i=0;i<5;i++)
	
	{
		printf("enter a[%d] :",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	

	{
		printf("\t enter b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n\t(A)\t(B)\t\tsum A=B\n");
	for(i=0;i<5;i++)
	{

				
		printf("\n\t%d  \t %d \t\t    %d",a[i],b[i],a[i]+b[i]);
	

	}
	printf("\n");
}

