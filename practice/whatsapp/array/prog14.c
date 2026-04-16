//Check if Array is a Palindrome
/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size], arr1[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    for (int i=0; i<size/2; i++)
    {
        int temp=arr[i];
        arr1[i]=arr[size-i-1];
        arr1[size-i-1]=temp;
    }
    
    int flag=0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]==arr1[i])
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
    printf("\n");
    
}
*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag=0;
    for (int i=0; i<size/2; i++)
    {
        if (arr[i]!=arr[size-i-1])
        {
            flag=1;
            break;
        }  
    }
    if (flag==0)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}