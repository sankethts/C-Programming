//menu card

#include<stdio.h>
int main()
{
    int choice;
    do
    {
        printf("-----Menu------\n");
        printf("Enter the choice: 1. Tea\n2. Coffee\n3. Cold Coffee\n4. Green tea\n5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
              printf("Tea\n");
              break;
            case 2:
              printf("Coffee\n");
              break;
            case 3:
              printf("Cold Coffee\n");
              break;
            case 4:
              printf("Green tea\n");
              break;
            case 5:
              printf("Thank you for visiting\n");
              break;
            default:
              printf("Invalid input, please re-enter\n");
        }
    } while (choice != 5);   
}