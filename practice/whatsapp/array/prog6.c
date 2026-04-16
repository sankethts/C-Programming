//Check if All Characters are Alphabets

#include<stdio.h>
int main()
{
    int size, flag=0;
    printf("Enter the size: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter elements of an array : ");
    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }
    
    for (int i=0; i<size; i++)
    {
        if (!((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z')))
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("All characters are alphabets\n");
    }
    else
    {
        printf("All characters are not alphabets\n");
    }
    printf("\n");
}