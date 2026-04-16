//wap to remove all vowels from string
// i/p: hello  o/p: hll
/*
#include<stdio.h>
void remov(char str[], char str1[])
{
    int isvowel;
    for (int i=0; str[i]!='\0'; i++)
    {
        for (int j=0; str1[j]!='\0'; j++)
        {
            isvowel=0;
            if (str[i]==str1[j])
            {
                isvowel=1;
                break;
            }
        }
        if (isvowel==0)
        {
            printf("%c",str[i]);
        }      
    }
}
int main()
{
    char str[]="hello";
    char str1[]="aeiou";
    remov(str, str1);
}
*/

#include<stdio.h>
int isVowel(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
void remov(char str[])
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(!isVowel(str[i]))
        {
            printf("%c", str[i]);
        }
    }
}
int main()
{
    char str[]="hello";
    remov(str);
}