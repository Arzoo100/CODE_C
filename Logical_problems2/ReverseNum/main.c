#include<stdio.h>
 int reverse(int num)
{
    int rev =0,rem=0;
    while(num!=0)
    {
        rem= num %10;
        rev= rev*10+rem;
        num = num/10;

    }
    return rev;
}
int main()
{
 int num = 2468;
 int rev = reverse(num);
 printf("%d",rev);
 return 0;
}
