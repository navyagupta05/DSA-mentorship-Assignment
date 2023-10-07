#include <stdio.h>

int main()
{
    float marks;
    printf("enter the marks of the student ");
    scanf("%f", &marks);
    if (marks>=90)
    {
        printf("excellent");
    }
    else if(marks<=90 && marks>80)
    {
        printf("good");
    }
    else if(marks<=80 && marks>70)
    {
        printf("fair");
    }
    else if(marks<=70 && marks>60)
    {
        printf("meets expectations");
    }
    else if(marks<=60)
    {
        printf("below par");
    }
    
    return 0;
}
