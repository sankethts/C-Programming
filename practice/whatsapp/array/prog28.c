//frequency

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,3,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int num=4;
    int freq=0;
    for (int i=0; i<size; i++)
    {
        if (num==arr[i])
        {
            freq++;
        }
    }
    printf("%d\n", freq);
}