#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=2;
    int n=8;
    long long int val =1;
    for(int i=0;i<n;i++)
    {
        val = val *m;
    }
    printf("The value of %d to the power %d is %lld",m,n,val);
    return 0;
}
