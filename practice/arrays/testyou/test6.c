//wap to find third smallest element of the array
//Better use limits header file, and initialise INT_MAX
#include<stdio.h>
#include<limits.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int fsmall=INT_MAX, ssmall=INT_MAX, tsmall=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<fsmall)
        {
            tsmall=ssmall;
            ssmall=fsmall;
            fsmall=arr[i];
        }
        else if(arr[i]>fsmall && arr[i]<ssmall)
        {
            tsmall=ssmall;
            ssmall=arr[i];
        } 
        else if(arr[i]>ssmall && arr[i]<tsmall)
        {
            tsmall=arr[i];
        }
    }
    printf("Third smallest element of the array: %d\n", tsmall);
}