#include<stdio.h>

int Fib(int m)
{

	int m1=0,m2=1,m3;

	if(m>0)
	{

		m3 = m1 + m2;

		m1 = m2;

		m2 = m3;

		printf("%d",m3);

            Fib(m-1);

	}

}

int main()
{

	int m;

	printf("enter preferred number of elements here: ");

	scanf("%d",&m);

	printf("Fibonacci Series: ");

	printf("%d %d ",0,1);

	Fib(m-2);
	return 0;

}
