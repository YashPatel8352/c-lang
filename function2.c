#include<stdio.h>
int mul()
{
	int a,b,c;
	printf("enter a mad b:");
	scanf("%d%d",&a,&b);
	c=a*b;
	return c;
}
int main()
{
	int x;
	printf("hello \n");
	x=mul();
	printf("multification of a and b:%d",x);
	printf("\n hi....\n");
}