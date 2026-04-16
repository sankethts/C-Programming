//wap to find frequency of each element
#include<stdio.h>
int main()
{
    int size, count=0;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], visited[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i]=0;
    }
    for(int i=0; i<size; i++)
    {
        if(visited[i]==1)
          continue;
        
        count=1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
        printf("%d appears %d times in array\n", arr[i], count);
    }
}