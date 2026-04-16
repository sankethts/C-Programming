//Remove an element from an array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to remove from an array: ");
    scanf("%d", &key);
    for (int i=0; i<size; i++)
    {
        if (arr[i]==key)
        {
            for (int j=i; j<size-1; j++)
            {
                arr[j]=arr[j+1];
            }
            size--;// decrease the size of an array by 1, as we have removed an element and future loops use smaller size
            i--;//recheck the same index, so you don't skip consecutive occurences of key
        }
    }

    printf("After removing an element from an array:\n");
    for (int k=0; k<size; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n"); 
}