//
//0
//11
//222
//3333
//44444
//555555
#include<stdio.h>

    int main()
    {
        int i,j,n;
        printf("enter the value\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
            printf("%d",i);
            }
            printf("\n");
        }
        return 0;
    }
