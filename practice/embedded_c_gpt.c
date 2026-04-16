//WAP to turn ON an LED if switch is pressed
/*
#include<stdio.h>
int main()
{
    int sw;
    printf("Enter switch is ON(1) OR OFF(0): ");
    scanf("%d", &sw);

    if (sw==1)
    {
        printf("LED is ON\n");
    }
    else
    {
        printf("LED is OFF\n");
    }
}
*/

//WAP to check whether a number is positive or negative
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n>0)
    {
        printf("The number %d is positive\n", n);
    }
    else if (n<0)
    {
        printf("The number %d is negetive\n", n);
    }
    else
    {
        printf("The number is zero\n");
    }
}
*/

//WAP to check whether a number is zero or non-zero
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n!=0)
    {
        printf("The number %d is non-zero\n", n);
    }
    else
    {
        printf("The number is zero\n");
    }
}
*/

//WAP to check whether a number is even or odd
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n%2==0)
    {
        printf("The number %d is even\n", n);
    }
    else
    {
        printf("The number %d is odd\n");
    }
}
*/

//WAP to find the greater of two numbers
/*
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1>n2)
    {
        printf("The number %d is greatest\n", n1);
    }
    else
    {
        printf("The number %d is greatest\n", n2);
    }
}
*/

//WAP to check whether a character is uppercase or lowercase
/*
#include<stdio.h>
int main()
{
    char n;
    printf("Enter character: ");
    scanf("%c", &n);

    if (n>='A' && n<='Z')
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Lowercase\n");
    }
}
*/

//WAP to check whether a character is a digit
/*
#include<stdio.h>
int main()
{
    char n;
    printf("Enter character: ");
    scanf("%c", &n);

    if (n>='0' && n<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Not a digit\n");
    }
}
*/

//WAP to check whether a year is a leap year
/*
Leap year is a year having 366 days.
The extra day is the 29th February.
Leap year arrives after every four years.
Note: every year that is exactly divisible by 4 is a leap year,
except the centurial year that is exactly divisible by 100. But
these centurial years are leap years if they are exactly
divisible by 400

HOW TO CHECK WHETHER A YEAR IS A LEAP
YEAR OR NOT?
>> If a year is divisible by 400 then it is a leap year.

For example: 2000 is divisible by 400. Therefore it is a leap
year

>> If a year is not divisible by 400 but it is divisible
by 100 then it is not a leap year.

For example: 1900 is divisible by 100 but not 400. Therefore it
is not a leap year

>> If a year is not divisible by 400 and not divisible by 100
but it is divisible by 4 then it is a leap year

For example: 2012 is not divisible by 400 and not divisible by
100 but it is divisible by 4. Therefore it is a leap year
*/
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year%400==0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year%100==0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if (year%4==0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year%400==0) ||(year%4==0 && year%100!=0))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}
*/

//WAP to check whether a number is divisible by 5
/*
#include<stdio.h>
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number%5==0)
    {
        printf("%d is divisible by 5\n", number);
    }
    else
    {
        printf("%d is not divisible by 5\n", number);
    }
}
*/

//WAP to check whether a number is multiple of 3 and 7
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n%3==0 && n%7==0)
    {
        printf("%d is multiple of 3 and 7\n", n);
    }
    else
    {
        printf("%d is not a multiple of 3 and 7\n", n);
    }
}
*/

//WAP to check whether a character is uppercase, lowercase, digit or a special character.
/*
#include<stdio.h>
int main()
{
    char n;
    printf("Enter character: ");
    scanf("%c", &n);

    if (n>='A' && n<='Z')
    {
        printf("Uppercase\n");
    }
    else if (n>='a' && n<='z')
    {
        printf("Lowercase\n");
    }
    else if (n>='0' && n<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
}
*/

//WAP to find the greatest of three numbers
/*
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
    {
        printf("The greatest number is: %d\n", n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf("The greatest number is: %d\n", n2);
    }
    else
    {
        printf("The greatest number is: %d\n", n3);
    }
}
*/
/*
#include<stdio.h>
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

//WAP to find the middle of three numbers
/*
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    int middle;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if ((n1>n2 && n1<n3) || (n1<n2 && n1>n3))
    {
        middle=n1;
    }
    else if ((n2>n1 && n2<n3) || (n2<n1 && n2>n3))
    {
        middle=n2;
    }
    else
    {
        middle=n3;
    }
    printf("The middle number is: %d\n", middle);
}
*/

//WAP to display grade based on marks
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int marks;
    char gr;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks>90)
    {
        gr='A';
    }
    else if (marks>=71 && marks<=90)
    {
        gr='B';
    }
    else if (marks>=51 && marks<=70)
    {
        gr='C';
    }
    else if (marks>=31 && marks<=50)
    {
        gr='D';
    }
    else
    {
        gr='F';
    }
    printf("The grade is: %c\n", gr);
}
*/

//WAP to display day of the week based on input (1–7)
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int day;
    printf("Enter day(1 to 7): ");
    scanf("%d", &day);

    if (day==1)
    {
        printf("Sunday\n");
    }
    else if (day==2)
    {
        printf("Monday\n");
    }
    else if (day==3)
    {
        printf("Tueday\n");
    }
    else if (day==4)
    {
        printf("Wednesday\n");
    }
    else if (day==5)
    {
        printf("Thurday\n");
    }
    else if (day==6)
    {
        printf("Friday\n");
    }
    else if (day==7)
    {
        printf("Saturday\n");
    }
    else
    {
        printf("Invalid day\n");
    }
}
*/

//WAP to display month name using number (1–12)
/*
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month(1 to 12): ");
    scanf("%d", &month);

    if (month==1)
    {
        printf("January\n");
    }
    else if (month==2)
    {
        printf("Febrauary\n");
    }
    else if (month==3)
    {
        printf("March\n");
    }
    else if (month==4)
    {
        printf("April\n");
    }
    else if (month==5)
    {
        printf("May\n");
    }
    else if (month==6)
    {
        printf("June\n");
    }
    else if (month==7)
    {
        printf("July\n");
    }
    else if (month==8)
    {
        printf("August\n");
    }
    else if (month==9)
    {
        printf("September\n");
    }
    else if (month==10)
    {
        printf("October\n");
    }
    else if (month==11)
    {
        printf("November\n");
    }
    else if (month==12)
    {
        printf("December\n");
    }
    else
    {
        printf("Not a month\n");
    }
}
*/

/*
WAP to check ATM withdrawal conditions
Withdrawal amount must be a multiple of 100
Withdrawal amount must be less than or equal to balance
Minimum balance should be maintained ₹500
*/
/*
#include<stdio.h>
int main()
{
    int balance, withdrawal;
    int min_bal;
    printf("Enter balance: ");
    scanf("%d", &balance);

    
    printf("Enter withdrawal: ");
    scanf("%d", &withdrawal);

    if (withdrawal%100==0 && balance-withdrawal>=500)
    {
        printf("Balance left is: %d\n", balance-withdrawal);
    }
    else
    {
        printf("Transaction failed!\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int balance, withdrawal;
    int min_bal=500;
    printf("Enter balance: ");
    scanf("%d", &balance);

    
    printf("Enter withdrawal: ");
    scanf("%d", &withdrawal);

    if (withdrawal%100!=0)
    {
        printf("Enter amount in multiple of 100\n");
    }
    else if (balance-withdrawal<min_bal)
    {
        printf("Minimum balance of 500 must be maintained\n");
    }
    else
    {
        printf("Available balance after transaction is: %d\n", balance-withdrawal);
    }
}
*/

/*
WAP to check traffic light status
1 → Red
2 → Yellow
3 → Green
*/
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number(1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &n);

    if (n==1)
    {
        printf("Red. Stop.\n");
    }
    else if (n==2)
    {
        printf("Yellow. Ready.\n");
    }
    else
    {
        printf("Green. Go.\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    char n;
    printf("Enter signal RYG: ");
    scanf("%c", &n);

    if (n=='r' || n=='R')
    {
        printf("Red. Stop.\n");
    }
    else if (n=='Y' || n=='y')
    {
        printf("Yellow. Ready.\n");
    }
    else if (n=='g' || n=='G')
    {
        printf("Green. Go.\n");
    }
    else
    {
        printf("Invalid signal\n");
    }
    
}
*/
/*
#include <stdio.h>
#include <unistd.h>   // for sleep()

int main()
{
    while (1)   // infinite loop
    {
        printf("RED  - STOP\n");
        sleep(5);   // Red light for 5 seconds

        printf("YELLOW - READY\n");
        sleep(2);   // Yellow light for 2 seconds

        printf("GREEN - GO\n");
        sleep(5);   // Green light for 5 seconds
    }

    return 0;
}
*/





