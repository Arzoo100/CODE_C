 //  1
  //232
 //34543
//4567654

#include<stdio.h>
int main()
{
    int n,i,j,s,k;
    printf("enter your value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        k=i;
         for(j=1;j<=i;j++)
         {
             printf("%d",k++);
         }
         k=k-2;
         for(j=1;j<i;j++)
         {
             printf("%d",k--);
         }
         printf("\n");
    }
    return 0;
}
