#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of star\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
          printf("*");
        }
        printf("\n");
    }
return 0;
}

//*****
//****
//***
//**
//*
