//wap to check the number is divisible by both 5 and 10 or not
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    if(num%5==0 && num%10==0)
    {
        printf("%d is divisible by both 5 and 10\n", num);
    }
    else
    {
        printf("%d is not divisible by both 5 and 10\n", num);
    }
    return 0;
}
*/

/*
//wap to check the number is positive or negetive
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num which is not zero: ");
    scanf("%d", &num);

    if (num>0)
    {
        printf("%d is positive", num);
    }
    else
    {
        printf("%d is negetive", num);
    }    
}
*/

//wap to add the value 2 in a num if num is even or add the value 3 in num
//i/p -> 5 o/p -> 7
//i/p -> 4 o/p -> 6
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("%d is even\n", num);
        num=num+2;
        printf("%d\n",num);
    }
    else
    {
        printf("%d is odd\n", num);
        num=num+3;
        printf("%d\n", num);
    }
}
*/

//wap to check the number is positive even or positive odd
//i/p -> 4 o/p -> positive even
//i/p -> 7 o/p -> positive odd
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    if (num>0 && num%2==0)
    {
        printf("%d is positive even\n", num);
    }
    else
    {
        printf("%d is positive odd\n", num);
    }
}
*/

//wap to find the largest number b/w two numbers
/*
#include<stdio.h>
int main()
{
    int a,b;
    int largest;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    
    if (a>b)
    {
        printf("%d is greater than %d\n", a,b);
        largest=a;
    }
    else
    {
        printf("%d is greater than %d\n", b,a);
        largest=b;
    }
    printf("The largest value b/w a and b is: %d\n", largest);
}
*/

//wap to check the last digit of a number is even or odd
//i/p -> 153 3 is odd
//i/p -> 152 2 is even
/*
#include<stdio.h>
int main()
{
    int num;
    int rem;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    rem = num % 10;

    if (rem % 2 == 0)
    {
        printf("Last digit of %d is even\n", num);
    }
    else
    {
        printf("Last digit of %d is odd\n", num);
    }
}
*/

//wap to check the student is fail or pass (passing marks is >=35)
//i/p -> 36 pass
//i/p -> 17 fail
/*
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the value of student marks: ");
    scanf("%d", &marks);

    if (marks >= 35)
    {
        printf("pass\n");
    }
    else
    {
        printf("Fail\n");
    }
}
*/

//wap to check the alphabet is uppercase or lowercase
//i/p a o/p lowercase
//i.p A o/p uppercase
/*
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet>='a' && alphabet<='z')
    {
        printf("Lowercase\n");
    }
    else
    {
        printf("Uppercase\n");
    }
}
*/

//wap to check two numbers are equal or not without using == operator
//i/p 2 3 o/p not equal
//i/p 2 2 o/p equal
/*
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 - num2 == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1>num2 || num1<num2)
    {
        printf("Not Equal\n");
    }
    else
    {
        printf("Equal\n");
    }
}
*/

// WAP to check the number is into the range or not. ( 0 to 100)
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num>=0 && num<=100)
    {
        printf("%d is within the range\n", num);
    }
    else
    {
        printf("%d is out of the range\n", num);
    }
}
*/

//WAP to check the person is eligible to vote or not.
/*
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of a person: ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("The person is eligible to vote\n");
    }
    else
    {
        printf("The person is not eligible to vote\n");
    }
}
*/

//WAP to check ATM pin
/*
#include<stdio.h>
int main()
{
    int pin;
    printf("Enter ATM pin: "); //1234
    scanf("%d", &pin);

    if (pin==1234)
    {
        printf("Correct password\n");
    }
    else
    {
        printf("Incorrect password\n");
    }
    
}
*/

//WAP to show mobile battery low alert
//If power is below or equal to 15 your program should give alert .
/*
#include<stdio.h>
int main()
{
    int battery;
    printf("Enter battery value: "); //1234
    scanf("%d", &battery);

    if (battery<=15)
    {
        printf("Power is below\n");
    }    
}
*/

//WAP to check the person can withdraw amount from ATM or not. If yes show the available balance.
/*
#include<stdio.h>
int main()
{
    int balance, withdraw;
    printf("Enter balance: "); 
    scanf("%d", &balance);

    printf("Enter withdraw: "); 
    scanf("%d", &withdraw);

    if (withdraw <= balance)
    {
        balance = balance - withdraw;
        printf("The balance is: %d\n", balance);
    }
    else
    {
        printf("Insufficient balance\n");
    }
    
}
*/

//WAP to LED turns ON if button is pressed
/*
#include<stdio.h>
int main()
{
    int button;
    printf("Enter button on or off: "); 
    scanf("%d", &button);

    if (button==1)
    {
        printf("LED is ON\n");
    }
    else
    {
        printf("LED is OFF\n");
    }
    
}
*/

//