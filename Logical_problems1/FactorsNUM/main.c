#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("enter the number whose prime factor you want\n");
    scanf("%d",&n);
    printf("the prime factor is as follow");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}
