#include<stdio.h>
int main()
{
    char ch;
    int flag=0;
    int character_count=0;
    int line_count=0;
    int word_count=0;
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
        {
            line_count++;
        }
        if(ch==' ' || ch=='\n')
        {
            if(flag==1)
            {
                word_count++;
                flag=0;
            }
        }
        else
        {
            flag=1;
        }
        character_count++;
    }
    if(flag==1)
    {
        word_count++;
    }
    printf("\ncharacter_count: %d\nline_count: %d\nword_count: %d\n", character_count, line_count, word_count);
}