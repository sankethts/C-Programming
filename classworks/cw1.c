//WAP to check whether character is Upper Case, Lower Case or Digit

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is Upper Case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is Lower Case\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is Digit\n");
    }
    else
    {
        printf("The character not an alphabet or digit\n");
    }
}