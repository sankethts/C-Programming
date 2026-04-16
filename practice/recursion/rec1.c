//Recursive function

/*
//1 2 3 4 5
#include<stdio.h>
void print(int n)
{
    printf("%d\n", n);
    if (n==5)
    {
        return;
    }
    print(n+1);
}
int main()
{
    print(1);
}
*/

/*
//1 2 3 4 5
#include<stdio.h>
void print(int n, int limit)
{
    printf("%d\n", n);
    if (n==limit)
    {
        return;
    }
    print(n+1, limit);
}
int main()
{
    int limit;//5
    scanf("%d", &limit);
    print(1, limit);
}
*/

//5 4 3 2 1
/*
#include<stdio.h>
void print(int n)
{
    printf("%d\n", n);
    if (n==1)
    {
        return;
    }
    print(n-1);
}
int main()
{
    print(5);
}
*/

//while deleting stackframe, print the value is called backtracking
/*
#include<stdio.h>
void print(int n)
{
    if (n==6)
    {
        return;
    }
    print(n+1);
    printf("%d\n", n);
}
int main()
{
    print(1);

}
*/

//wap to print the binary representation of the number
/*
//This is printing like for 8=0001, but it has to print 1000, so use recursive function i.e backtracking
#include<stdio.h>
void binary(int num)
{
    int rem=0, bin=0, temp=num;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        printf("%d ", rem);
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    binary(num);
}
*/

/*
//This is backtracking for binary representation
#include<stdio.h>
void binary(int num)
{
    if (num==0)
    {
        return;
    }
    binary(num/2);
    printf("%d ", num%2);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    binary(num);
}
*/


//1279, print 1,2,7,9 and in same program print 9,7,2,1 using recursive function
/*
#include<stdio.h>

void print(int num)
{
    if (num==0)
    {
        return;
    }
    printf("%d ", num%10);
    print(num/10);
    printf("%d ", num%10);  
}
int main()
{
    print(1279);
}
*/

#include<stdio.h>

void recur(int n)
{
    if(n==0)
    {
      return;
    }
    return recur(n-1);
    printf("%d ", n);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    recur(n);
}