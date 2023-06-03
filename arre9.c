#include <stdio.h>

int main()
 {
    int a[10] ;
    
    int sum = 0,i;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("enter a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
   for ( i = 0; i < 10; i++)
	 {
        if (a[i] % 2 != 0) 
		{
            	sum += a[i];
     	      }
    }
    printf("Total of odd elements: %d\n", sum);
 for ( i = 0; i < 10; i++)
	 {
        if (a[i] % 2 == 0)
		 {
           		 sum += a[i];
       	 }
  	  }
    printf("Total of odd elements: %d\n", sum);


     for(i=0;i<10;i=i+2)
    {
        printf("\n %d",a[i]);
    }
     printf("\nsum");
    for(i=0;i<10;i=i+2)
    {
        sum=sum+a[i];
    }    
    printf("\n:%d\n",sum);
     for(i=1;i<10;i=i+2)
    {
        printf("\n %d",a[i]);
    }
     printf("\nsum");
    for(i=1;i<10;i=i+2)
    {
        sum=sum+a[i];
    }    
    printf("\n:%d\n",sum);
for(i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }
     printf("\nsum");
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }    
    printf("\n:%d\n",sum);

}
    
   

    
   


    


