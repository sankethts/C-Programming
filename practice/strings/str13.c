//wap to remove words from the sentence
//i/p: hi how are you are you ok? 
//key: are
//o/p: hi how you you ok?

#include<stdio.h>

void remov(char str[], char key[])
{
    for (int i=0; str[i]!='\0'; i++)
    {
        if (key[i]==str[i])
        {
            continue;
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
int main()
{
    char str[]="hi how are you are you ok?";
    char key[]="are";
    remov(str, key);
}