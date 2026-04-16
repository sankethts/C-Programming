//wap to copy string(strcpy)
// i/p: str1="hello"  str2="hello"

#include<stdio.h>
#include<string.h>
void copy(char str2[], const char str1[])
{
    int i;
    for (i=0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
        //printf("%c", str2[i]);
    }
    str2[i]='\0';
    printf("%s\n", str2);
}
int main()
{
    char str1[]="hello";
    char str2[6];
    copy(str2, str1);
}