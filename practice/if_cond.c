/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);

    if (b==0)
    {
        printf("b should be not equal to zero\n Enter the value of b greater than zero\n");
        scanf("%d", &b);
    }
    printf("%d\n",a/b);
    return 0;
}
   
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);

    if (b==0)
    {
        printf("b should be not equal to zero\n Enter the value of b greater than zero\n");
        scanf("%d", &b);
    }
    printf("%d\n",a/b);
    return 0;
}
 
//wap to check the number is divisible by both 5 and 10 or not
//wap to check the number is positive or negetive
//wap to add the value 2 in a num if num is even o.w. add the value 3 in num
i/p -> 5 o/p -> 7
i/p -> 4 o/p -> 6
//wap to check the number is positvie even or positive odd
i/p -> 4 o/p -> positive even
i/p -> 7 o/p -> positive odd
*/
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);

    if (num % 5 ==0 && num % 10 == 0)
    {
        printf("num is divisible by both 5 and 10\n");
        
    }
    else
    {
        printf("num is not divisible by both 5 and 10\n");    
    }
    return 0;
}
    */
//wap to check the number is positive or negetive
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);

    if (num>=0)
    {
        printf("num is positive\n");  
    }
    else
    {
        printf("num is negetive\n");
        
    }
    return 0;
}
    */
//wap to add the value 2 in a num if num is even o.w. add the value 3 in num
//i/p -> 5 o/p -> 7
///i/p -> 4 o/p -> 6
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("num is even\n");
        printf("%d\n", num+2);  
    }
    else
    {
        printf("%d\n", num+3);
        
    }
    return 0;
}
    */
   /*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("num is even\n");
        printf("%d\n", num+2);  
    }
    else
    {
        printf("%d\n", num+3);
        
    }
    return 0;
}
*/

//wap to check the number is positvie even or positive odd
//i/p -> 4 o/p -> positive even
//i/p -> 7 o/p -> positive odd
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);

    if (num>0 && num%2 == 0)
    {
        printf("num is positive even\n");
         
    }
    else
    {
        printf("num is negetive");
        
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    int largest

    if (a>b)
    {
        printf("num is positive\n");
        largest=a
    }
    else
    {
        printf("num is negetive");
        largest=b;
    }
    printf("The largest value is\n", largest)
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch, s, sen;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    scanf("%s", &s);
    printf("%s\n", s);
    
    scanf("%s", &sen);
    printf("%s\n", sen);   
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


//wap to check number is even or odd or zero

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
/*
//grade system
0 to 30 fail
31 to 50 D
51 to 70 C
71 to 90 B
>90 A

#include <stdio.h>

int main() 
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n>90)
    {
        printf("A\n");
    }  
    else if (n>=71 && n<=90)
    {
        printf("B\n");
    }
    else if (n>=51 && n<=70)
    {
        printf("C\n");
    }
    else if (n>=31 && n<=50)
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

/*
wap to calculate discount amount
amount>5000  give 20% discount
amount>3000  give 15%
amount>2000  give 5%
amount is 1000  pay will be 1000 only


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
   

//wap to find largest number b/w 3 numbers


#include <stdio.h>

int main() 
{

    int n1, n2, n3;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1>=n2 && n1>=n3)
    {
        printf("%d is greater\n", n1);
        
    }  
    else if (n2>=n1 && n2>=n3)
    {
        printf("%d is greater\n", n2);  
    }
    else
    {
        printf("%d is greater\n", n3);

    }
}
     

#include <stdio.h>

int main() 
{

    int n1, n2, n3;
    int largest;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1>=n2 && n1>=n3)
    {
        largest=n1;
        
    }  
    else if (n2>=n1 && n2>=n3)
    {
        largest=n2;  
    }
    else
    {
        largest=n3;

    }
    printf("The largest value is: %d\n", largest);
}


//

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
/*
#include <stdio.h>

int main() 
{

    int n1, n2, n3;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1>)
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
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if (year%400==0)
    {
        printf("Leap year\n");
    }
    else if(year%100==0)
    {
        printf("Not a Leap year\n");
    }
    else if (year%4==0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a Leap year\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if ((year%400==0) || (year%4==0 && year%100!=0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a Leap year\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    float num1,num2, num3;
    printf("Input: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Output: %f\n", (num1+num2+num3)/3);
}
*/
/*#include<stdio.h>
int main()
{
    float fahrenheit;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Celsius= %f\n", (fahrenheit-32)*5/9);
}*/
