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
    
    start=0;
    for(int i=0; ; i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            end=i-1;
            while(start<end)
            {
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
        if(str[i] == '\0')
        break;
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
    printf("Reversed string:\n%s\n", str);
}

