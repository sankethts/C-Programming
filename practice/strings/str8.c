//wap to calculate the no. of words in sentence
//i/p: "Hi, how are you"   o/p: 4

#include<stdio.h>
void word(char str[])
{
    int count=1;
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
    }
    printf("%d\n", count);
}
int main()
{
    char str[]="Hi, how are you";
    word(str);
    
}

/*
#include<stdio.h>
void word(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // start of a word
        if ((i == 0 && str[i] != ' ') || 
            (str[i] != ' ' && str[i-1] == ' '))
        {
            count++;
        }
    }

    printf("%d\n", count);
}

int main()
{
    char str[] = "Hi, how are you";
    word(str);
}
*/

