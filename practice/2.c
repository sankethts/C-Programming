/*#include<stdio.h>
int main()
{
    int ash;
    char sha;
    printf("Enter the value of ash:");
    scanf("%d",&ash);
    printf("The value of ash is: %d\n",ash);
    printf("Enter the value of sha:");
    getchar();
    scanf("%c",&sha);
    printf("The value of sha is: %c\n",sha);
}
*/
/*
//wap to check num1 is divisible by num2 without using % operator
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if((num1/num2)*num2==num1)
    {
        printf("num1 is divisible by num2\n");
    }
    else
    {
        printf("num1 is not divisible by num2\n");

    }
}
*/

/*an automoble company manufactures both two and four wheelers. 
a company manager wants to make the production of type of vehicle
according ot the data given below.
1) is total number of vehicles(suppose total vehicles 200)
2) is total number of wheels.(total wheels 540)
task to find total number of two wheelers and total number of four wheelers
#include<stdio.h>
int main()
{
    int tv, tw, tottw, totfw;
    printf("Enter total number of vehicles: ");
    scanf("%d", &tv);
    printf("Enter total number of wheels: ");
    scanf("%d", &tw);
    tottw=((tv*4)-tw)/2;
    totfw=tv-tottw;
    printf("Total two wheelers: %d\n", tottw);
    printf("Total four wheelers: %d\n", totfw);
}
*/



/*
* * * * *
* 1 2 3 *
* 1 2 3 *
* 1 2 3 *
* * * * *

#include<stdio.h>
int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i==0 || i==4 || j==0 || j==4)
            {
                printf("* ");
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}
*/
/*

    *
    *
* * * * *
    *
    * 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==n/2 || j==n/2)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
*/


/*given an integer array arr[n], task to find count of elements whose value is greater than all of its prior elements
the first element of the array shud be in the count of the result
7,4,8,2,9    

#include<stdio.h>
int main()
{
    int size, count=0;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter array: ");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    count=1;
    for(int i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
    }
    printf("%d %d\n", count, max);
}
*/

/*
one student finding the factors of given number, help student to find factors of that number

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("factors are: ");
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("%d ", i);
        }

    }
}
*/

/*
perfect number

#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }
}
*/

//wap to find reverse of number
#include<stdio.h>
int main()
{
    int num, rev=0;
    scanf("%d", &num);
    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num/=10;
    }
    printf("%d\n", rev);
}