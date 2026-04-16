//Ticket Price Calculator

#include<stdio.h>
int main()
{
    int age;
    float ticket_price=100;
    printf("Age = ");
    scanf("%d", &age);
    if (age < 5)
    {
        printf("Children under 5 years old get in free!\n");
        printf("Ticket price: Rs. 0.00\n");
    }
    else if (age >= 5 && age <= 12)
    {
        //50% discount
        ticket_price = ticket_price -50.0/100*100;
        printf("Ticket price: Rs. %g\n", ticket_price);
    }
    else if (age >= 65)
    {
        //20% discount
        ticket_price = ticket_price -20.0/100*100;
        printf("Ticket price: Rs. %g\n", ticket_price);
    }
    else
    {
        printf("Ticket price: Rs. %g\n", ticket_price);
    }
}