#include<stdio.h>
int main()
{
	int a,n;
	a=-n;

	printf("Enter n::");
	scanf("%d",&a);

	while(a<=n)
	{
	printf("\t %d",a);
	a++;
	}
	 return 0;
}