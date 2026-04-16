//wap to print string character by character
#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}