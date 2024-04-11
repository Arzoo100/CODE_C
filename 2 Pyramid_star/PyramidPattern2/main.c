   // 1
   //2 2
  //3 3 3
 //4 4 4 4
//5 5 5 5 5
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
              printf("%d ",i);
         }
         printf("\n");

    }



}
