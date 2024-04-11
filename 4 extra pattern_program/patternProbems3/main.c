//54321
//5432
//543
//54
//5
#include<stdio.h>

    int main()
    {
        int i,j,n;
        printf("enter the value\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=5;j>i;j--)
            {
            printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }
