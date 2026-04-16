//Shift Characters to Next ASCII Value

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter elements of an array : ");
    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }
    printf("After shifting characters: ");
    for (int i=0; i<size; i++)
    {
        arr[i]=arr[i]+1;
        printf("%c ", arr[i]);
    }
    printf("\n");
}