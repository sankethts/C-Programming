//wap to remove a character from string
//i/p: "hello"  key: 'e'  o/p: "hllo"
/*
#include<stdio.h>
void word(char str[], char key)
{
    for (int i=0; str[i]!='\0'; i++)
    {
        if (key==str[i])
        {
            continue;
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
int main()
{
    char str[]="Hello";
    char key='l';
    word(str, key);
    
}
*/

#include<stdio.h>
int main()
{
    char str[]="hello";
    char ch;
    scanf("%c", &ch);
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==ch)
        {
            for (int j=i; str[j]!='\0'; j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
    printf("%s", str);
}
