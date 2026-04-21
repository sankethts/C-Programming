//wap to compare two strings
#if 1
//with strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    int res=strcmp(str1, str2);
    printf("%d\n", res);
}
#endif
#if 0
//without strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    int flag=0;
    for(int i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}
    #endif