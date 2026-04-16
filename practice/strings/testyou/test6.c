//wap to reverse string using pointers
#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int size=strlen(str);
    for(int i=0; i<size/2; i++)
    {
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }
}
int main()
{
    char str[30];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    char *ptr=str;
    reverse(str);
    printf("Reversed string: %s\n", str);
    
}