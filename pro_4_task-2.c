#include<stdio.h>
int main()
{
	int age;
	printf("enter age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("eligible for voting");
	}
	else
	{
		printf("not eligible for voting");
	}
}


output

enter age :19
eligible for voting


enter age :12
not eligible for voting