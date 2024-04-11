#include<stdio.h>
int main()
{
    int n,i=0,j=0;
    printf("enter the number of star\n");
    scanf("%d",&n);
    //to run this n times
    for(i=0;i<n;i++)
    {
        //to  print i+! TIMES
        for( j=0;j<n;j++)
        {
           printf("%d\t",j);
        }
        printf("\n");
    }
return 0;
}

