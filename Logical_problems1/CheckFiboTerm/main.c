#include<stdio.h>
int main()
{
    int f1,f2,f3,n;
    printf("enter the your value ,so we can check it is fibonacci term or NOT\n ");
    scanf("%d",&n);
    f1=0;f2=1;
    if(n==0)
        printf("it is fibonacci number\n");
    f3=f1+f2;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
        printf("it is fibonacci number\n");
    else
        printf("not a fibonacci number\n");
    return 0;
}
