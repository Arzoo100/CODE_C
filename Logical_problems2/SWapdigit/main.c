#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a=10;
    b=20;
    printf("before swapping %d %d\n" ,a,b);
    //swapping without using third variable
    a=a+b;
    b=a-b;
    a=a-b;

    printf("before swapping %d %d" ,a,b);
    return 0;
}
