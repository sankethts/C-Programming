//strcat
/*
#include<stdio.h>
int main()
{
    char str1[]="hello";
    char str2[]="world";
    int size=sizeof(str1)+sizeof(str2)-1;
    printf("%d\n", size);
    char res[size];
    for (int i=0; str1[i]!='\0'; i++)
    {
        res[i]=str1[i];
    }
    for (int i=0; str2[i]!='\0'; i++)
    {
        res[(size/2)+i]=str2[i];
    }
    res[size]='\0';
    printf("%s\n", res);
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[]="hello";
    char str2[]="world";
    int size=strlen(str1)+strlen(str2)+1;
    
    char res[100];
    for (i=0; i<=size; i++)
    {
        if(i<size/2)
        {
            res[i]=str1[i];
        }
        else
        {
            res[i]=str2[i];
        }
    }
    res[i]='\0';
    printf("%s\n", res);
}

