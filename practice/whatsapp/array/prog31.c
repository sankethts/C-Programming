//Search a number in an array

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
    printf("Enter the element to find in array: ");
    scanf(" %d", &key);

    int flag=0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}