#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,pal,r,x;
    printf("enter the number\n");
    scanf("%d",&x);n=x;
    for(int i=1;i<=n;i++)
   {
       pal=i;
    while(i>0)
    {
        r = i%10;
        rev = rev*10+r;
        i = i/10;
    }
    if(rev==pal)
    {


        printf("The given number (%d) is palindrome \n",pal);
    }
    else
    {


        printf("The given number (%d) is not  palindrome\n ",pal);
    }
}
 return 0;
}
