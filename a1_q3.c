#include <stdio.h>

int main()
{
    int a, b, count=0;
    
    
        printf("enter a number ");
        scanf("%d", &a);
            for(b=1; b<=a; b++)
            {
                if(a%b==0)
            {
                count++;
            }
            }
            
            if(count==2)
            {
                printf("prime");
            }
            else
            {
                printf("not prime");
            }
    

    return 0;
   
    
}
    
