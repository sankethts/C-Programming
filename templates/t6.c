//Calculate Simple Interest

#include<stdio.h>
int main()
{
    int rate_of_interest, time;
    float principle_amount, simple_interest;
    printf("Enter principle amount: ");
    scanf("%f", &principle_amount);
    printf("Enter rate_of_interest: ");
    scanf("%d", &rate_of_interest);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    
    simple_interest = (principle_amount * rate_of_interest * time)/100;
    /*if (simple_interest == (int)simple_interest)
    {
        printf("Simple interest: %d\n", (int)simple_interest);
    }
    else
    {
        printf("Simple interest: %.2f\n", simple_interest);
    }*/
    printf("Simple interest: %g\n", simple_interest);
    return 0;
}