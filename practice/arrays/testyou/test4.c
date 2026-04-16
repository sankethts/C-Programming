//wap to find second smallest element of the array
#include<stdio.h>
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
    int fsmall=arr[0], ssmall=arr[1];
    for(int i=1; i<size; i++)
    {
        if(arr[i]<fsmall)
        {
            ssmall=fsmall;
            fsmall=arr[i];
        }
        else if(arr[i]>fsmall && arr[i]<ssmall)
        {
            ssmall=arr[i];
        } 
    }
    printf("Second smallest element of the array: %d\n", ssmall);
}