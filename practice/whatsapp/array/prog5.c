//Check if Number is Present in Array

#include<stdio.h>
int main()
{
    int size, num, flag=0;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of an array : ");
    for (int i=0; i<size; i++)
    {
        scanf(" %d", &arr[i]);
    }
    printf("Enter the number to check: ");
    scanf("%d", &num);
    for (int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("%d is present in the array\n", num);
    }
    else
    {
        printf("%d is not present in the array\n", num);
    }
    printf("\n");
}