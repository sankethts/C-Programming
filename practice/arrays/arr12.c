//Delete element from specific position
/*
#include<stdio.h>
int main()
{
    int size, position;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    int arr[size];
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete that element: ");
    scanf("%d", &position);
    for (int i=position-1; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printf("Array after deleting element: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/

//Delete/remove an element from an array

#include<stdio.h>
int main()
{
    int size, element;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    int arr[size];
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to remove: ");
    scanf("%d", &element);
    for (int i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
            for(int j=i;j<size-1; j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    
    printf("Array after deleting element: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}