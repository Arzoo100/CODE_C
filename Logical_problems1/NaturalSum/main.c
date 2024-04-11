#include<stdio.h>
int main()
{

int num,sum=0;
printf("enter the last number you want to sum\n");
scanf("%d",&num);
for(int i=0;i<=num;i++)
{
    sum=sum+i;

// sum=((n*n)+n)/2;
}
printf("sum of first %d digit is \n",sum);
}
