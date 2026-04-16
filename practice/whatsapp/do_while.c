//WAP using a do while loop that takes an integer N from the use rand prints all numbers from 1 to N

#include<stdio.h>
int main()
/*
{
    int n,i=1;
    printf("Enter number: ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    }while (i<=n);
}
*/

/*
Create a menu - driven program using do while where the user can select:
1 to Start
2 to Stop
3 to Exit the menu
*/
/*
{
    int n;
    do
    {
        printf("Menu\n1. to start\n2. to stop\n3. to exit the menu\n");
        printf("Enter choice: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
              printf("Started\n");
              break;
            case 2:
              printf("Stopped\n");
              break;
            case 3:
              printf("Exited\n");
              break;
            default:
              printf("Invalid choice\n");
              break;
        }
    } while (n!=3);
}
*/

//Keep asking the user to enter the password until the correct one (e.g.,1234) is entered
/*
{
    int password;
    do
    {
        printf("Enter password: ");
        scanf("%d", &password);
        if (password==1234)
        {
            printf("Access granted\n");
        }
        else
        {
            printf("Incorrect password. Try again!\n");
        }
    } while (password!=1234);
}
*/

// Calculate the factorial of a number using a do while loop
/*
{
    int n, fact=1, i=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    do
    {
        fact=fact*i;
        i++;
    } while (n>=i);
    printf("%d\n", fact); 
}
*/

//SumofDigits
/*
{
    int n, digit=0, sum=0;
    printf("Enter the number: ");//1234
    scanf("%d", &n);

    do
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    } while (n!=0);
    printf("%d\n", sum);
}
*/

//Write a program that repeatedly asks the user to enter a positive number. Stop only when a valid positive number is entered.
/*
{
    int n;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if (n>0)
        {
            printf("You entered: %d\n", n);
            
        }    
    } while (n<0);   
}
*/

//Print Even Numbers from 1 to 10
/*
{
    int i=1, n=10;
    do
    {
        if (i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    } while (i<=n);
    
}
*/
