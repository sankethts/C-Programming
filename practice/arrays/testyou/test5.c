//wap to find third largest element of the array
//Better use limits header file, and initialise flarge=slarge=tlarge=INT_MIN;
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
    int flarge=-9999, slarge=-9998, tlarge=-9997;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>flarge)
        {
            tlarge=slarge;
            slarge=flarge;
            flarge=arr[i];
        }
        else if(arr[i]<flarge && arr[i]>slarge)
        {
            tlarge=slarge;
            slarge=arr[i];
        }
        else if(arr[i]<slarge && arr[i]>tlarge)
        {
            tlarge=arr[i];
        }
    }
    printf("Third largest element of the array: %d\n", tlarge);
}