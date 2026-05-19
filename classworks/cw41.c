//WAP to reverse each character of the word in a given string
//i/p: hello world
//o/p: olleh dlrow
#include<stdio.h>
void reverse(char str[], int start, int end)
{
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
    char str[100];
    int i=0, start=0, end=0;
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    reverse(str, start, end);
    printf("Reversed string:\n%s\n", str);
}