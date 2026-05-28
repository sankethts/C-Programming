//Arrays
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

#if 0
//wap to print a 2d array
int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of 2d array are:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//wap to find largest element in an array
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements of 1d array are:\n");
    int max=arr[0];
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
        if(arr[i]>max)
         max=arr[i];  
    }
    printf("\nLargest element in the array is %d\n", max);
}
#endif

#if 0
//wap to find largest and smallest element in an array
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements of 1d array are:\n");
    int max=arr[0], min=arr[0];
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
        if(arr[i]>max)
         max=arr[i];
        if(arr[i]<min)
         min=arr[i];  
    }
    printf("\nLargest element in the array is %d\n", max);
    printf("\nSmallest element in the array is %d\n", min);
}
#endif

#if 0
//wap to find an element in array using binary search
int binary_search(int arr[], int low, int high, int key);
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int res = binary_search(arr, 0, size-1, key);
    if(res == -1)
     printf("Element not found in array\n");
    else
     printf("Element found at %d index\n", res);

     return 0;
}
int binary_search(int arr[], int low, int high, int key)
{
    while(low<=high)
    {
        // calculating mid point
        int mid=(low+high)/2;

        // Check if key is present at mid
        if(arr[mid] == key)
         return mid;

        // If key greater than arr[mid], ignore left half
        else if(key>arr[mid])
         low=mid+1;

        // If key is smaller than or equal to arr[mid],
        // ignore right half 
        else
         high=mid-1;
    }

    // If we reach here, then element was not present
    return -1;
}
#endif

#if 0
//wap to sort an arry using bubble sort
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in descending sorted order:\n");
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");   
}
#endif

#if 0
// wap to remove duplicate elements from array
int main()
{
    int size, duplicate=0, k=0;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size], unique[size];
    printf("Enter elements of array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++)
    {
        duplicate=0;
        for(int j=0; j<k; j++)
        {
            if(arr[i]==unique[j])
            {
                duplicate=1;
                break;
            }
        }
        if(duplicate==0)
         unique[k++]=arr[i];
    }

    printf("After removing duplicate elements from the array:\n");
    for(int i=0; i<k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
#endif

#if 0
//wap to remove all occurences of an element in array
int main()
{
    int size, key, k=0;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to remove: ");
    scanf("%d", &key);
    for(int i=0; i<size; i++)
    {
        if(arr[i] != key)
         arr[k++]=arr[i];
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
#endif

#if 0
// wap to find common array elements b/w two arrays
int main()
{
    int size1, size2;
    printf("Enter size1: ");
    scanf("%d", &size1);
    printf("Enter elements of array1: ");
    int arr1[size1];
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size2: ");
    scanf("%d", &size2);
    printf("Enter elements of array2: ");
    int arr2[size2];
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements b/w two arrays are:\n");
    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ", arr1[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
#endif

#if 0
// wap to find common array elements b/w two arrays
int main()
{
    int size1, size2;
    printf("Enter size1: ");
    scanf("%d", &size1);
    printf("Enter elements of array1: ");
    int arr1[size1];
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size2: ");
    scanf("%d", &size2);
    printf("Enter elements of array2: ");
    int arr2[size2];
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements b/w two arrays are:\n");
    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ", arr1[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
#endif

#if 1
//
int main()
{
    
}
#endif