#include<stdio.h>
int maths,science,english,total,grade;
float percentage;
void display()
{
     
		printf("maths\tscience\tenglish\ttotal\tpercentage\tgrade\n");
		printf("%d\t%d\t%d\t%d\t%.2f",maths,science,english,total,percentage);
	
if(maths<33 ||science<33 || english<33)
{
	printf("\tfail");
}

else if(percentage>=75)
{
   printf("\t\tA");
 }
 else if(percentage>=60 && percentage<=75)
     {
        printf("\t\tB");
     }
 else if (percentage>=45 && percentage<=60)
     {
        printf("\t\tC");
     }
 else if (percentage>=35 && percentage<=45)
    { 
       printf("\t\tD");
    }
 
}
void calc()
{
	total=maths+science+english;
	percentage=(float)total/3;
	
}
void setdata()
{
	printf("enter maths marks::");
	scanf("%d",&maths);
	
	printf("enter science marks::");
	scanf("%d",&science);
	
	printf("enter english marks::");
	scanf("%d",&english);
}
int main()
{
	setdata();
	calc();
	display();
}