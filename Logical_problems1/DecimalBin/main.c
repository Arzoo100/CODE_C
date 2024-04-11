#include<stdio.h>
int main()
{
    int rem=0,i=0;
    int n=6;
    int a[10];
    while(n)
    {
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;

    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}
