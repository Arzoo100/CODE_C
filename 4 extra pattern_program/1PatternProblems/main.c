//0
//01
//012
//0123
//01234
//012345
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
            printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }
