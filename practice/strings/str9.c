
//palindrome
#include<stdio.h>
#include<string.h>
void palindrome(char str[])
{
    int flag=0;
    int size=strlen(str);
    for (int i=0; i<size/2; i++)
    {
        if (str[i]!=str[size-i-1])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
}
int main()
{
    char str[]="madaM";
    palindrome(str);
}


