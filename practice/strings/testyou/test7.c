//wap to copy string 

#if 1
//using strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30], str2[30];
    printf("Enter string: ");
    scanf("%[^\n]", str1);
    char *ptr = strcpy(str2, str1);//returns destination pointer
    printf("Copied string: %s\n", ptr);
}
#endif

#if 0
//without strcpy()
#include<stdio.h>
int main()
{
    char str1[30], str2[30];
    int i;
    printf("Enter string: ");
    scanf("%[^\n]", str1);
    for(i=0; str1[i]; i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("Copied string: %s\n", str2);
}
    #endif