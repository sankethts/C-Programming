#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    if(fp == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
}