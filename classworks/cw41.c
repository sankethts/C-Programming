//WAP to reverse each character of the word in a given string
//i/p: hello world
//o/p: olleh dlrow
#include<stdio.h>
void reverse(char str[], int start, int end)
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
    printf("Enter string: ");
    scanf(" %[^\n]", str);
    int i=0, start, end;
    while(str[i]!='\0')
    {
        // skip spaces
        while(str[i]==' ')
          i++;

        // If end reached after skipping spaces
          if(str[i]=='\0')
          break;

        start=i;

        // Move till end of word
        while(str[i]!=' ' && str[i]!='\0')
          i++;

        end=i-1;
        reverse(str, start, end);
    }
    printf("%s\n", str);
    return 0;
}