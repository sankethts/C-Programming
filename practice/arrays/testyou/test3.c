//wap to find second largest element of the array
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
    int flarge=arr[0], slarge=arr[1];
    for(int i=1; i<size; i++)
    {
        if(arr[i]>flarge)
        {
            slarge=flarge;
            flarge=arr[i];
        }
        else if(arr[i]<flarge && arr[i]>slarge)
        {
            slarge=arr[i];
        }
        
    }
    printf("Second largest element of the array: %d\n", slarge);
}