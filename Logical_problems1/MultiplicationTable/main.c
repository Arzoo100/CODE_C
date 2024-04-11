#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min,max,i,j;
    printf("enter min and max value for multiplication table\n");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        for(j=1;j<=1;j++)
        {
            printf("\n %d * %d =%d",i,j,i*j);
        }
        printf("\n");
        printf("\THE ABOVE  Multiplication table OF %d\n",i);
    }
}
