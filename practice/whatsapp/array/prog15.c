//Determine if the array is sorted in ascending order.

#include<stdio.h>
int main()
{
    int size, flag=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Yes, it is sorted\n");
    }
    else
    {
        printf("No, it is not sorted\n");
    }
    printf("\n");
    
}