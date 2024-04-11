   // 1
   //1 2
  //1 2 3
 //1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main()
{
    printf("enter your value\n");
    int n,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<n-i;s++)
        {
             printf(" ");
        }
        for(j=1;j<=i;j++)
         {
              printf("%d ",j);
         }
         printf("\n");

    }



}
