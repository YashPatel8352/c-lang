//verify the formula a=p*(1+(r/100)/n)-p.
#include<stdio.h>
int main ()
{
 int p=12.0,r=6,n=5,a;
a=p*(1+(r/100)/n)-p;
printf("p*(1+(r/100)/n)-p=%d",a);
return 0;
}

output
/*
p*(1+(r/100)/n)-p=0
*/