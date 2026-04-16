//wap to implement own strlen function

#include<stdio.h>
int main()
{
    int size, count=0;
    printf("Enter size: ");
    scanf("%d", &size);
    char str[size];
    printf("Enter string: ");
    scanf("%s", str);
    for (int i=0; i<str[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of the string is: %d\n", count);

}

