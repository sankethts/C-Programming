//WAP to copy its contents in text_copy.txt
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("t1.txt", "w");
    if(fp==NULL)
    {
        perror("Error: ");
        return -1;
    }
    char ch;
    while((ch=getchar())!=EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}