//wap to remove duplicates from an array
/*
//Without using extra array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<size-1; k++)
                {
                    arr[j]=arr[j+1];
                }
                size--;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/

//with using extra array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], unique[size], flag=0, count=0;
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        flag=0;
        for(int j=0; j<count; j++)
        {
            if(arr[i]==arr[j])//here we compare the current element with already stored in unique[]
            {
                flag=1;
                break;
            } 
        }
        if(flag==0)
        {
            unique[count++]=arr[i];
        }
    }
    for(int i=0; i<count; i++)
    {
        printf("%d ", unique[i]);
    }
    printf("\n");
}

/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //selection sorting
    for(int i=0; i<size; i++)
    { 
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size-1; j++)
        {
            if(arr[j]==arr[j+1])
            {
                for(int k=j; k<size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            }
            
        }
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/

