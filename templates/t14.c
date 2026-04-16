//Print grade for given score

#include<stdio.h>
int main()
{
    int score;
    char grade;
    printf("Enter the score: ");
    scanf("%d", &score);
    
    if (score>=90 && score<=100)
    {
        grade='A';
    }
    else if (score>=80 && grade<=89)
    {
        grade='B';
    }
    else if (score>=70 && score<=79)
    {
        grade='C';
    }
    else if (score>=60 && score<=69)
    {
        grade='D';
    }
    else
    {
        grade='F';
    }
    printf("Your grade is %c\n", grade);
}