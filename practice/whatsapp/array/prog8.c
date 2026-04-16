//Count Occurrences of a Number

#include<stdio.h>
int main()
{
    int size, count=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter key value to check its count in an array: ");
    scanf("%d", &key);
    for (int i=0; i<size; i++)
    {
        if (arr[i]==key)
        {
            count++;
        }
    }
    printf("%d occurs %d times.\n", key, count);
}