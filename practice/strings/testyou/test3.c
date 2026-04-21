//wap to reverse a string
#if 1
#include<stdio.h>
#include<string.h>
// Actually reversing the string
int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int size=strlen(str);
    for(int i=0; i<size/2; i++)
    {
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }
    printf("%s\n", str);
}
#endif

#if 0
#include<stdio.h>
#include<string.h>
// Printing the string in reverse
int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int size=strlen(str);
    for(int i=size-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
    #endif