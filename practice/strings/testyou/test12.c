//wap to remove spaces from string
#include<stdio.h>
int main()
{
    char str[30];
    int j=0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("%s\n", str);
}