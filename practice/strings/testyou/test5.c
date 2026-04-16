//wap to count vowels, consonants in a string
#include<stdio.h>
int main()
{
    char str[30];
    int vowel=0, consonant=0, digit=0, space=0;
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonant++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpace: %d\n", vowel, consonant, digit, space);
}