//wap to print all most frequent elements
#include<stdio.h>
int main()
{
    int size, count=0, maxcount=0, element=0;
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
        if(count>maxcount)
        {
            maxcount=count;
        }
    }
    //reset visited array
    for(int i=0; i<size; i++)
    {
        visited[i]=0;
    }

    //print elements with max frequency
    printf("Most frequent elements:\n");
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
        if(count==maxcount)
        {
            printf("%d appears %d times\n", arr[i], maxcount);
        }
    }
}