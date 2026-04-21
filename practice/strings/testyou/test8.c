//wap to concatenate string
#if 0
//with using strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[30];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}
#endif

#if 1
//without strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[30];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    int size1=strlen(str1);
    for(int i=0; str2[i]; i++)
    {
        str1[size1]=str2[i];
        size1++;
    }
    str1[size1]='\0';
    printf("Concatenated string: %s\n", str1);
    //printf("%zu\n", sizeof(str1));
}
#endif