//Reverse an Array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    char arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }
    
    for (int i=0; i<size/2; i++)
    {
        char temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    for (int i=0; i<size; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
    
}