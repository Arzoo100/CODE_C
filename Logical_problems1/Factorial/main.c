#include<stdio.h>
int factorialIterative(int n)
{
    int val =1;
    for(int i=n;i>=1;i--)
    {
        val = val*i;
    }
    return val;
}
int factorialRecursive(int n)
{
    if(n==0||n==1)
        return 1;
    else
    return n*factorialRecursive(n-1);
}
int main()
{
     int n =5;
     int factorialx = factorialIterative(n);
     int factorialy  = factorialRecursive(n);
     printf("%d\t",factorialx);
     printf("%d",factorialy);
     return 0;
}
