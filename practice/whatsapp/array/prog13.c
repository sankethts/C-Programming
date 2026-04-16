//Print the frequency of each unique element in an integer array.

#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int visited[size];   // To track counted elements

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;   // initialize
    }

    printf("\nFrequency of each element:\n");

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d time(s)\n", arr[i], count);
    }
    return 0;
}


/*
#include <stdio.h>

// bubble sort
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Step 1: Sort
    sort(arr, size);

    printf("\nFrequency of each element:\n");

    int count = 1;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            printf("%d occurs %d time(s)\n", arr[i], count);
            count = 1;
        }
    }

    // last element
    printf("%d occurs %d time(s)\n", arr[size - 1], count);

    return 0;
}
*/