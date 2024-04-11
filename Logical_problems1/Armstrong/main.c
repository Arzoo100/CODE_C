#include<stdio.h>
int main()
{
    int n,sum=0,r,armstrong;
    printf("enter the number\n");
    scanf("%d",&n);
    armstrong =n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(armstrong==sum)
        printf("its armstrong number\n");
    else
    printf("not armstrong number\n");
    return 0;
}
