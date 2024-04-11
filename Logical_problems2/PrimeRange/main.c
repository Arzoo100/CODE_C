#include <stdio.h>
#include <stdlib.h>
int isprime(int n)
{
for(int i=2;i<=n;i++)
{
    if(n%i==0)
    {
        return 0;
    }
    return 1;
}
}

int main()
{
    int x,y;
 printf("enter first number\n");
 scanf("%d",&x);
 printf("enter second number\n");
 scanf("%d",&y);
 for(int z = x;z<=y;z++)
 {
     if(isprime(z))
     {
         printf("%d\t",z);
     }
 }
 return 0;
}
