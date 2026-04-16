//Check whether an array is palindrome

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size], flag=0;
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<size; i++)
    {
        if (arr[i]!=arr[size-i-1])
        {
            flag=1;
            break;  
        }
    }
    
    if (flag==0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    printf("\n"); 
}