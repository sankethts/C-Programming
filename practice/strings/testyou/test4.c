//wap to check palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int size=strlen(str);
    int flag=0;
    for(int i=0; i<size/2; i++)
    {
        flag=0;
        if(str[i]!=str[size-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%s is not a palindrome\n", str);
    }
    else
    {
        printf("%s is a palindrome\n", str);
    }
}
