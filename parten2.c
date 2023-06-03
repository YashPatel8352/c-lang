#include<stdio.h>
int main()
{
    int i,j,sum=1;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("\t%d",sum);
		sum+=1;
        }
        printf("\n\t",j);
    }
    return 0;
}  





