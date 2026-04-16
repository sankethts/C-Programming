//Check whether two arrays are equal

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size], arr1[size], flag=0;
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elments of another array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    for (int i=0; i<size; i++)
    {
        if (arr[i]==arr1[i])
        {
            flag=1;
        }
    }

    if (flag==1)
    {
        printf("Two arrays are equal\n");
    }
    else
    {
        printf("Two arrays are not equal\n");
    }
    printf("\n"); 
}