#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
    printf("enter your number\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("There is only 1 digit in the number\n");
        return 0;
    }
    while(n!=0)
    {
        n= n/10;
        count++;

    }
    printf("total digit in given number is  %d\n",count);
    return 0;
}

