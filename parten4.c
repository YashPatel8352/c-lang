#include<stdio.h>
int main()
{
    int i,j,a,sum=1;
    for(i=1;i<=5;i++)
    {
	  a=5-1;
	  sum=i;
        for(j=1;j<=i;j++)
        {
            printf("\t%d",sum);
		sum+=a;
		a--;
          }
        printf("\n\t",j);
    }
    return 0;
} 





