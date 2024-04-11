#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int isprime= 1;
    for(int i=0;i<n;i++)
    {

        if(n%i==0)
        {
            isprime=0;
        }
    }
    if(isprime)
    {

        printf("not prime");
    }
    else
    {
        printf("prime");
    }

    return 0;
}
