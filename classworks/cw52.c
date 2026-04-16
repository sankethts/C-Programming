//WAP program to find the occurrences of character 'c' using ftell()
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("text.txt", "r");
    if(fp==NULL)
    {
        perror("Error: ");
        return -1;
    }
    char ch;
    int count=0;
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch, fp);
        if(ch=='c')
        {
            count++;
        }
    }
    printf("Count: %d\n", count);
    fclose(fp);
    return 0;
}