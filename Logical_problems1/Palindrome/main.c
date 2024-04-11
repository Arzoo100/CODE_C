#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,pal,r;
    printf("enter the number\n");
    scanf("%d",&n);
    pal=n;
    while(n!=0)
    {
        r = n%10;
        rev = rev*10+r;
        n = n/10;
    }
    if(rev==pal)
        printf("The given number (%d) is palindrome ",n);
    else
        printf("The given number (%d) is not  palindrome ",r);
    return 0;
}
