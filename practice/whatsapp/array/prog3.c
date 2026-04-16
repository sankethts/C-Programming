//Count Uppercase and Lowercase Characters

#include<stdio.h>
int main()
{
    int size, uppercase=0, lowercase=0, special_case=0;
    printf("Enter the size af an array: ");
    scanf("%d", &size);

    char arr[size];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    for (int i=0; i<size; i++)
    {
        if (arr[i]>='A' && arr[i]<='Z')
        {
            uppercase++;
        }
        else if (arr[i]>='a' && arr[i]<='z')
        {
            lowercase++;
        }
        else
        {
            special_case++;
        }
    }
    printf("Uppercase: %d\nLowercase: %d\nSpecial case: %d\n", uppercase, lowercase, special_case);
}