//strstr() searches for the first occurrence of a substring inside a main string and returns a pointer to that position.

//wap to find sub string present or not
#if 0
//with strstr()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    char *ptr;
    ptr=strstr(str1, str2);
    if(ptr)
    {
        printf("Substring found: %s\n", ptr);
    }
    else
    {
        printf("Substring not found\n");
    }

}
#endif
#if 1
//without strstr
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    int flag=0, i, j;
    for(i=0; str1[i]; i++)
    {
        for(j=0; str2[j]; j++)
        {
            if(str1[i+j]!=str2[j])
            {
                break;
            }
        }
        if(str2[j]=='\0')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Substring found: %s\n", &str1[i]);
    }
    else
    {
        printf("Substring not found\n");
    }
}
#endif