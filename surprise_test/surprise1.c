//arrays
#include<stdio.h>
//1)wap to arrange array elements in descending order
#if 0
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elemnts: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array elements in descending order:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//2)wap to check the array is palindrome or not, print output in main()
int check_palin(int arr[], int size)
{
    for(int i=0; i<size/2; i++)
    {
        if(arr[i] != arr[size-i-1])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elemnts: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = check_palin(arr, size);
    if(res == 0)
    {
        printf("Entered array is palindrome\n");
    }
    else if(res == 1)
    {
        printf("Entered array is not a palindrome\n");
    }
}
#endif

#if 0
//3) a)wap to reverse the array, print o/p in main()
void reverse(int arr[], int size)
{
    for(int i=0; i<size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elemnts: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, size);

    printf("After reversing array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//3) b)wap to swap numbers using pointers
void swap(int *n1, int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    swap(&n1, &n2);
    printf("After swap:\n%d %d\n", n1, n2);
}
#endif

#if 1
//wap to merge two arrays into third array using pointers
int main()
{
    int size1, size2;
    printf("Enter size1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter array1 elemnts: ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size2: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter array2 elemnts: ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int size3 = size1 + size2;
    int arr3[size3];
    printf("After merging:\n");
    for(int i=0; i<size3; i++)
    {
        if(i<size1)
          arr3[i] = arr1[i];
        else
          arr3[i] = arr2[i-size1];
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}
#endif