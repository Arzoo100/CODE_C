#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,sum;
   printf("enter the range till you want square sum\n");
   scanf("%d",&n);
   sum =(n*(n+1)*(2*n+1))/6;
   printf("the sum of sqaure 0f given range %d is %d",n,sum);
   return 0;
}
