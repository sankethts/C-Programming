//Find All Prime Numbers in the Array
#include<stdio.h>
int main()
{
    int size, count=0, j=1;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers are: ");
    for (int i=0; i<size; i++)
    {
        count=0, j=1;
        while (j<=arr[i])
        {
            if (arr[i]%j==0)
            {
                count++;
            }
            j++;
        }
        if (count==2)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}