#include <stdio.h>

int main()
{
    int a, b, i, j, count, prime;
    printf("enter the lower limit of the range ");
    scanf("%d", &a);
    printf("enter the upper limit of the range ");
    scanf("%d", &b);
    
    printf("prime numbers between %d and %d are ", a, b);
    for(i=a; i<=b; i++)
    {
        prime = 1;
        
        for(j=2; j*j<=i; j++)
       {
           if(i%j==0)
           {
               prime = 0;
               break;
           }
           if(prime==1)
           {
               printf("%d ",i);
           }
        
       }
    }
    
    return 0;
}
