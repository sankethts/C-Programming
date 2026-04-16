//WAP to check whether character is uppercase, lowercase, digit or none of the above
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("Uppercase\n");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("Lowercase\n");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("None of the above\n");
    }
}
*/

//WAP to find the middle number (by value) of given 3 numbers
/*
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1, &n2, &n3);

    if ((n1>n2 && n1<n3) || (n1<n2 && n1>n3))
    {
        printf("%d is the middle number\n", n1);
    }
    else if ((n2>n1 && n2<n3) || (n2<n1 && n2>n3))
    {
        printf("%d is the middle number\n", n2);
    }
    else
    {
        printf("%d is the middle number\n", n3);
    }
    
}
*/

//WAP to find whether the number is positve even, odd or negetive even, odd or zero
/*
#include <stdio.h>

int main() 
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n>0)
    {
        if (n%2==0)
        {
            printf("%d is positive even\n", n);
        }
        else
        {
            printf("%d is positive odd\n", n);
        }
        
    }  
    else if (n<0)
    {
         if (n%2==0)
        {
            printf("%d is negetive even\n", n);
        }
        else
        {
            printf("%d is negetive odd\n", n);
        } 
    }
    else
    {
        printf("%d is zero\n");
    }
}
*/

//WAP to find greatest of three numbers
/*
#include <stdio.h>

int main() 
{

    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1>n2 && n1>n3)
    {
        printf("Largest number is: %d\n", n1);
        
    }  
    else if (n2>n1 && n2>n3)
    {
        printf("Largest number is: %d\n", n2);
    }
    else
    {
        printf("Largest number is: %d\n", n3);
    }
}
*/
//Another method
/*
#include <stdio.h>

int main() 
{

    int n1, n2, n3;
    int largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1>n2 && n1>n3)
    {
        largest=n1;
        
    }  
    else if (n2>n1 && n2>n3)
    {
        largest=n2;
    }
    else
    {
        largest=n3;
    }
    printf("The largest number is: %d\n", largest);
}
*/

/*
wap to calculate amount after discount
amount>5000  give 20% discount
amount>3000  give 15%
amount>2000  give 5%
amount is 1000  pay will be 1000 only
*/
/*
#include <stdio.h>

int main() 
{

    float amount;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    
    if (amount>5000)
    {
        amount=amount-(amount*(0.20));
        
    }  
    else if (amount>3000)
    {
        amount=amount-(amount*(0.15));
        
    }
    else if (amount>2000)
    {
        amount=amount-(amount*(0.05));
        
    }
    else
    {
        amount=amount;
    }
    printf("Discount amount need to pay is: %.1f\n", amount);
    return 0;
}
*/

/*
//grade system
0 to 30 fail
31 to 50 D
51 to 70 C
71 to 90 B
>90 A
*/
/*
#include <stdio.h>

int main() 
{

    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if (marks>90)
    {
        printf("A\n");
    }  
    else if (marks>=71 && marks<=90)
    {
        printf("B\n");
    }
    else if (marks>=51 && marks<=70)
    {
        printf("C\n");
    }
    else if (marks>=31 && marks<=50)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
*/

//wap to check the number is positive or negetive or zero
/*
#include <stdio.h>

int main() 
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n>0)
    {
        printf("Number is positive\n");
    }  
    else if (n<0)
    {
        printf("The number is negetive\n");
    }
    else
    {
        printf("The number is zero\n");
    }
    return 0;
}
*/

//wap to check number is even or odd or zero
/*
#include <stdio.h>

int main() 
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n==0)
    {
        printf("Number is zero\n");
    }  
    else if (n%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
*/