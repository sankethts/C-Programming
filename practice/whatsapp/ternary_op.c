//WAP to check the character is uppercase or lowercase
#include<stdio.h>
int main()
/*
{
    char ch, ch1;
    printf("Enter character: ");
    scanf("%c", &ch);

    ch1=(ch>='A' && ch<='Z')?printf("The character is uppercase\n"):(ch>='a' && ch<='z')?printf("The character is lowercase\n"): printf("Invalid\n");
}
*/

//WAP to check if Number is Multiple of 10.
/*

{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n%10==0)?printf("The number is a multiple of 10\n"):printf("The number is not a multiple of 10\n");
}
*/

//WAP to check if Number Lies Within a Range 0 to 10
/*
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    (n>0 && n<10)?printf("Within the range\n"):printf("Out of range\n");
}
*/

/*
Given a character, convert it:
 Uppercase to lowercase
 Lowercase to uppercase
 Leavedigits or symbols unchanged
*/
/*
{
    char ch;
    printf("Enter a charcater: ");
    scanf("%c", &ch);
    ch=(ch>='A' && ch<='Z')?ch+32:(ch>='a' && ch<='z')?ch-32:(ch>='0' && ch<='9')?ch:ch;
    printf("%c\n", ch);
}
*/

/*
Write a program that reads a single character and classifies it as:
"Uppercase Letter"
"Lowercase Letter"
"Digit"
"Special Character"
*/
/*
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    
    (ch>='A' && ch<='Z')?printf("Uppercase\n"):(ch>='a' && ch<='z')?printf("Lowercase\n"):(ch>='0' && ch<='9')?printf("Digit\n"):printf("Special character\n");
}
*/

{
    int x, y, z;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    if (x)
    z=(x>0 && y>0)?printf("Q1\n"):(x<0 && y>0)?printf("Q2\n"):(x<0 && y<0)?printf("Q3\n"):(x>0 && y<0)?printf("Q4\n"):(x==0 && y==0)?printf("Origin\n"):(x==0 && (y>0 || y<0))?printf("Y-axis\n"):printf("X-axis\n");

}

