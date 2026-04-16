//waf to check character is vowel

#include<stdio.h>

void vowel( char ch)
{
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Not a vowel\n");
    }

}
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    vowel(ch);
}