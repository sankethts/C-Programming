//waf to convert uppercase letter to lowercase

#include<stdio.h>

char letter(char ch)
{
    if (ch>='A' && ch<='Z')
    {
        ch=ch+32;   
    }
    return ch;
}
int main()
{
    char ch;
    printf("Enter uppercase letter: ");
    scanf(" %c", &ch);
    char let=letter(ch);
    printf("Lowercase: %c\n", let);
}
