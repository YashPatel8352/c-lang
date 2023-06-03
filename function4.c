//no argyment with return
////verify the formula L=(c+d)*(g+h).
#include<stdio.h>
int yash ()
{
 /*int c=2,d=6,g=10,h=6,L;
 L=(c+d)*(g+h);
printf("(c+d)*(g+h)=%d",L);
return 0;*/



int c,d,g,h,L,l;

printf(" entre c=");
scanf("%d",&c);

printf(" entre d=");
scanf("%d",&d);

printf(" entre g=");
scanf("%d",&g);

printf(" entre h=");
scanf("%d",&h);

l=(c+d)*(g+h);
printf("%d",&L);
return L;
}
int main()
{
	int L;
	printf(".......\n");
	yash();
	printf("multification of L:%d",L);
	printf("\n......\n");
}