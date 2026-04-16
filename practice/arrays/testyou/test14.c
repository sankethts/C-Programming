//wap to sort the array using selection sort
/*
find smallest element and place in its correct position
find minimum , swap with first element
*/

//ascending order
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size-1; i++)
    {
        int min = i;

        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Sorted array:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*
//descending order
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size-1; i++)
    {
        int max = i;

        for(int j = i+1; j < size; j++)
        {
            if(arr[j] > arr[max])
            {
                max = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }

    printf("Array in descending order:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/