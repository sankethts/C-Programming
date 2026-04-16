//Shift Array Elements One Time to the Right
//1 2 3 4 5
//After shift: 5 1 2 3 4
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int last=arr[size-1];
    for (int i=size-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[0]=last;
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}