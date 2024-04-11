#include<stdio.h>
int returnMax(int array[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {

            max=array[i];
        }

    }
    return max;

}
int main()
{
    int arr[]={1,12,3,54,5,67,89,90,-987};
    int max = returnMax(arr,9);
    printf("the max number is %d",max);
    return 0;

}
