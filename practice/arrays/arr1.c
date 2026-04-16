//take size from user, take elements from user, print those elements

#include<stdio.h>
int main()
{
    //Take user input for size
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    //declare array
    int arr[size];

    //taking array elements from the user
    printf("Enter the elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //print those elements
    for (int i=0; i<size; i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}