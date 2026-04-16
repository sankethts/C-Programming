//calloc() function example
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *ptr;
    //int arr[30];
    printf("Enter the number of values: ");
    scanf("%d", &n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the values: ");
    /*for(int i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }*/
    printf("Entered values are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    free(ptr);
    return 0;
}