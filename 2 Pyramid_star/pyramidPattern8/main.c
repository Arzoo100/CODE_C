   // 1
  // 22
 // 333
// 4444
//55555
#include<stdio.h>
int main()
{
    printf("enter your value\n");
    int n,i,j,s;
    scanf("%d",&n);
    for(i=5;i>=0;i--)
    {
        for(s=1;s<=n-i;s++)
        {
             printf(" ");
        }
        for(j=1;j<=i;j++)
         {
              printf("%d",j);
         }
         printf("\n");

    }



}
