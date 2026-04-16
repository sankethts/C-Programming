//wap to find the smallest element of the array
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
    int small=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("Smallest element of the array: %d\n", small);
}