#include<stdio.h>
int main()
{
    char x[]="smilePlease"; char y[11];

    int len =0, temp;
    while(x[len]!='\0')
    {
        len++;
    }
    printf("The length of string is %d and The String before reverse is %s\n",len,x);
    for(int i=0;i<(len-1)/2;i++)
    {
       temp=x[i];
       x[i]=x[len-1-i];
       x[len-1-i]=temp;
    }
    printf("the string after reverse %s\n",x);

    return 0;
}
