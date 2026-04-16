/*
#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=5;i++)
    {
        printf("%d\n",i);
    }
    
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<=12;i+=3) //1,3,6,9,12
    {
        printf("%d\n",i);
    }
    return 0;
    
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    for (i=2;i<=32;i*=2)
    {
        printf("%d\n",i);
    }
    return 0;
    
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    for (i=5;i>0;i--)
    {
        printf("%d\n",i);
        
    }
    printf("\n");
    for (i=2;i<=32;i*=2)
    {
        printf("%d\n",i);
        
    }
    printf("\n");
    for (i=0;i<=12;i+=3)
    {
        printf("%d\n",i);
        
    }
    printf("\n");
    for (i=1;i<=5;i++)
    {
        printf("%d\n",i);
        
    }
    return 0;
    
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<=12;i+=3)
    {
        printf("%d\n",i*i);
        
    }

    for (i=0;i<=4;i++)
    {
        printf("%d\n",i*3);
        
    }
    
    for (i=0;i*3<=12;i++)
    {
        printf("%d\n",i*3);
        
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<=12;i+=3)
    {
        printf("%d\n",i*i);
        
    }

    for (i=0;i<=4;i++)
    {
        printf("%d\n",i*3);
        
    }
    
    for (i=0;i*3<=12;i++)
    {
        printf("%d\n",i*3);
        
    }
}
*/

//print numbers from 1 to n
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=0 ; i<=n ; i++)
    {
        printf("%d\n", i);
    }
}
*/

//print numbers from n to 0
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=n ; i>=0 ; i--)
    {
        printf("%d\n", i);
    }
}
*/

//print odd numbers from 1 to 100
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i+=2)
    {
        printf("%d\n", i);
    }
}
*/

//print multiples of 5 upto n
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=5 ; i<=n ; i+=5)
    {
        printf("%d\n", i);
    }
}
*/

//print ASCII values of A to Z
/*
#include<stdio.h>
int main()
{
    

    for (char i='A' ; i<='Z' ; i++)
    {
        printf("%c=%d\n", i,i);
    }
}
*/

//find sum of first n natural numbers
/*
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
}
*/

//find sum of even numbers upto n
/*
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=0 ; i<=n ; i+=2)
    {
        sum += i;
    }
    printf("%d\n", sum);
}
*/

//print square of numbers from 1 to n
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++)
    {
        printf("%d\n", i*i);
    }
    
}
*/

//print cube of numbers from 1 to n
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++)
    {
        printf("%d\n", i*i*i);
    }
    
}
*/

//1 2 3 4 5
//5 10 15 20 25
//2 4 6 8 10
//1 4 9 16 25
//1 8 27 64 125
/*
#include<stdio.h>
int main()
{
    
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    
    for (int i=1 ; i<=5 ; i++)
    {
        printf("%d\n", i);
    } 
    printf("\n"); 
    for (int i=5 ; i<=25 ; i+=5)
    {
        printf("%d\n", i);
    }  
    printf("\n"); 
    for (int i=2 ; i<=10 ; i+=2)
    {
        printf("%d\n", i);
    }  
    printf("\n"); 
    for (int i=1 ; i<=5 ; i++)
    {
        printf("%d\n", i*i);
    }  
    printf("\n"); 
    for (int i=1 ; i<=5 ; i++)
    {
        printf("%d\n", i*i*i);
    }  
}
*/

/*
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
*/

//1 -2 3 -4 5 -6
/*
#include<stdio.h>
int main()
{ 
    for (int i=1 ; i<7 ; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", -i);
        }
        else
        {
            printf("%d\n", i);
        }  
    }   
}
*/

//2 4 6 -8 10 12 -14
/*
#include<stdio.h>
int main()
{   
    for (int i=1 ; i<=7 ; i++)
    {
        int val=i*2;
        if (val%8==0 || val%14==0)
        {
            printf("-%d\n", val);
        }
        else
        {
            printf("%d\n", val);
        }  
    }   
}
*/

//28/01/26
//2 table
/*
#include<stdio.h>
int main()
{ 
    for (int i=1 ; i<=10 ; i++)
    {
        printf("2*%d=%d\n", i,2*i);
    }   
}
*/
/*
#include<stdio.h>
int main()
{ 
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (int i=1 ; i<=10 ; i++)
    {
        printf("%d*%d=%d\n", num,i,2*i);
    }   
}
*/

//wap to find the factorial of a number: multiplication of first n natural numbers
//n(n-1)(n-2)...2*1
/*
#include<stdio.h>
int main()
{ 
    int fact=1;
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (int i=num ; i>=1 ; i--)
    {
        fact=fact*i;
        printf("%d\n",fact);
    }   
    printf("\n");
    fact=1;
    for (int i=1; i<=num; i++)
    {
        
        fact=fact*i;
        printf("%d\n", fact);
    }
}
*/

//prime numbers: all the numbers should have exactly two factors, the number itself and 1
/*
#include<stdio.h>
int main()
{ 
    int count=0;
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (int i=1 ; i<=num ; i++)
    {
        if (num%i==0)
        {
            count++;      
        }  
    } 
    if (count==2)
    {
        printf("%d is prime\n", num);
    }  
    else
    {
        printf("%d is not prime\n", num);
    }  
}
*/
/*
#include<stdio.h>
int main()
{ 
    int count=0;
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    for (int i=2 ; i<num ; i++)
    {
        if (num%i==0)
        {
            count++;      
        }  
    } 
    if (count==0)
    {
        printf("%d is  a prime\n", num);
    }  
    else
    {
        printf("%d is not a prime\n", num);
    }  
}
*/

//wap to check perfect square or not
//assignment 4
/*
//Method 1 excluding number
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num>0)
    {
        for (int i=1; i<num; i++)
        {
            if (num%i==0)
            {
                sum=sum+i;
            }
        }  
    }
    else
    {
        printf("Invalid input, enter only positive number\n");
    }

    if (num==sum)
    {
        printf("Yes, enetered number is a perfect number\n");
    }
    else
    {
        printf("No, enetered number is not a perfect number\n");
    }
}
*/

/*
//Method1 excluding number
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num>0)
    {
        for (int i=1; i<(num/2); i++)
        {
            if (num%i==0)
            {
                sum=sum+i;
            }
        }  
    }
    else
    {
        printf("Invalid input, enter only positive number\n");
    }

    if (num==sum)
    {
        printf("Yes, entered number is a perfect number\n");
    }
    else
    {
        printf("No, entered number is not a perfect number\n");
    }
}
*/   
    
      
//Method2 including number
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num>0)
    {
        for (int i=1; i<=)
    }

}
*/   
  

//wap to print the first number which is divisible by 6 in the range of 1 to 10
/*
#include<stdio.h>
int main()
{
    
    for (int i=1; i<=10; i++)
    {
        if (i%6==0)
        {
            printf("%d\n", i);
            break;
        }
        
        
    }
}
*/

//wap to print 7th even number from 1 to 100
/*
#include<stdio.h>
int main()
{
    int count=0;
    for (int i=1; i<=100; i++)
    {
        if (i%2==0)
        {
            count++;
        }
        if (count==7)
        {
            printf("The seventh even number is %d\n", i);
            break;
        }
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int count=0, lower, upper;
    printf("Enter Lower range and Upper range: ");
    scanf("%d %d", &lower, &upper);
    for (int i=1; i<=100; i++)
    {
        if (i%2==0)
        {
            count++;
        }
        if (count==7)
        {
            printf("The seventh even number is %d\n", i);
            break;
        }
    }
}
*/

//wap to print 3rd prime number in 1 to 100

#include<stdio.h>
int main()
{
    int num, flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i=2; i<num; i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}