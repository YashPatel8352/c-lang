#include <stdio.h>

int main() {
    int a[10] ;
    
    int sum = 0,i;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("enter a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
        }
    }
    printf("Total of odd elements: %d\n", sum);

}
    


