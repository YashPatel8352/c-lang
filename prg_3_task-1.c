//verify the formula of simple interest.
# include<stdio.h>
int main ()


{
   /* int p=90,r=40,n=20,z;
    z=p*r*n/100;
    printf("z=%d",z);
    return 0;*/


	float p,r,n,z;
	z=((p*r*n)/(100));
	printf("\n enter P= ");
	scanf("%f",&p);
	printf("\n enter r=");
	scanf("%f",&r);
	printf("\n enter n=");
      scanf("%f",n);
	

	printf("((p*r*n)/(100))=%f",z);
	return 0;
}
/*
z=720
*/