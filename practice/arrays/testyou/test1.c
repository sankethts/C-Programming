//find largest element in the array
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
    int large=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("Largest element of the array: %d\n", large);

}