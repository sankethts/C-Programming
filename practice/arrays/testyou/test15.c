//wap to sort the array using insertion sort
/*
insert each element into its correct position in the sorted part
*/

//ascending order
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(int i=1;i<size;i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    printf("Array in ascending order:\n");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}

/*
//descedning order
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(int i=1;i<size;i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] < key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    printf("Array in descending order:\n");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}
*/