//wap to find most frequent element found in an array

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
            element=arr[i];
        }
    }
    printf("Maximum repeated element is %d for %d times\n", element, maxcount);
}
    
   /*
   #include<stdio.h>
   void fun(int *ptr)
   {
    int a=10;
    ptr=&a;
    printf("%d\n", *ptr);
   }
   int main()
   {
    int a=20;
    int *ptr=0;
    fun(ptr);
    printf("%d\n", *ptr);
   }
*/