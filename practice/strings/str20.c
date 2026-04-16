//reverse each word from sentence
//hello world -> olleh dlrow

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
    int start=0;
    char str[]="hello world";
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==' ' || str[i+1]=='\0')
        {
            if(str[i+1]=='\0')
            {
                reverse(str,start,i);
            }
            else
            {
                reverse(str,start,i-1);
                start=i+1;
            }
        }
    }
    printf("%s\n", str);
}