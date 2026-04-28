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
    int k=0;
    scanf("%c", &ch);
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]!=ch)
        {
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    printf("%s", str);
}
