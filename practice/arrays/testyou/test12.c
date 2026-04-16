//wap to remove duplicates from the array
/*
//using visited array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], visited[size];
    printf("Enter array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i]=0;
    }
    printf("Array elements after removing duplicates:\n");
    for(int i=0; i<size; i++)
    {
        if(visited[i]==1)
          continue;

        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                visited[j]=1;
            }
        }
        printf("%d ", arr[i]); 
    }
    printf("\n");
}
*/

/*
//without extra array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;//recheck same position
            }
        }
    }
    printf("Array elements after removing duplicates:\n");
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
    int size, found=0, i, j, k=0;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], unique[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<size; i++)
    {
        found=0;
        for(j=0; j<k; j++)
        {
            if(arr[i]==unique[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            unique[k++]=arr[i];
        }
    }
    printf("Array elements after removing duplicates:\n");
    for(i=0; i<k; i++)
    {
        printf("%d ", unique[i]);
    }
    printf("\n");
}
