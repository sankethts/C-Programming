//own strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="helloman";
    char ptr[]="gaandu";
    int size=strlen(str);
    for(int i=0; ptr[i]; i++)
    {
        str[size]=ptr[i];
        size++;
    }
    str[size]='\0';
    printf("%s\n", str);
}