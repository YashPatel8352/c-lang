//with agriment no return
//verify the formula of simple interest.
#include<stdio.h>
int intrest(float y)
{
	float p,r,n,a;
	a=((p*r*n)/(100));
	printf("\n enter P= ");
	scanf("%f",&p);
	printf("\n enter r=");
	scanf("%f",&r);
	printf("\n enter n=");
      scanf("%f",&n);

	a=((p*r*n)/(100));
	printf("simple instrest of:%f",a);
}
int main ()
{
	int x;
	intrest(x);
}