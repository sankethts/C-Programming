///insertion of element at specific position
//this is for unsorted array

#include<stdio.h>
int main()
{
    int arr[60], size, element, position;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert element: ");
    scanf("%d", &position);
    for (int i=size-1; i>=position-1; i--)
    {
        arr[i+1]=arr[i];
    }
    size++;
    arr[position-1]=element;
    printf("Array after inserting element: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


//wap to insert new value in array which shud be in sorted
//here, the entered array must be in sorted order
#include<stdio.h>
int main()
{
    int arr[60], size, element, position, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    for (i=size-1; i>=0 && arr[i]>element; i--)
    {
        arr[i+1]=arr[i];
    }
    size++;
    arr[i+1]=element;
    printf("Array after inserting element: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
