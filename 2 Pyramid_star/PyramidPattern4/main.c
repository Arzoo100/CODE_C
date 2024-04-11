//1
//23
//456
//78910
#include<stdio.h>
int main()
{
    printf("enter your value\n");
    int n,i,j,c=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {

        for(j=1;j<=i;j++)
         {
              printf("%d",c);
              c++;

         }
          printf("\n");


    }



}
