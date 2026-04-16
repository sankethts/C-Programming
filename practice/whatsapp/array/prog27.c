//remove duplicates

#include<stdio.h>
int main()
{
    int size, num, count=0, flag=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size], unique[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //unique[0]=arr[0];
    for (int i=0; i<size; i++)
    {
        flag=0;
        for (int j=0; j<count; j++)
        {
            if (arr[i]==unique[j])
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            unique[count]=arr[i];
            count++;
        }
    }
    for (int i=0; i<count; i++)
    {
        printf("%d ", unique[i]);
    }
    printf("\n");
}