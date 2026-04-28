//WAP to reverse the order of words in a string
//i/p: hello world
//o/p: world hello
#include<stdio.h>
#include<string.h>
void reverse(char *str, int start, int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int i, start, end;
    int size=strlen(str);
    reverse(str, 0, size-1);
    i=0;
    while(str[i]!='\0')
    {
        while(str[i]==' ')
         i++;
            
        start=i;

        while(str[i]!=' ' && str[i]!='\0')
          i++;

        end=i-1;
        reverse(str, start, end);
    }
    printf("%s\n", str);
}

