//Implement simple calculator using Switch

#include<stdio.h>
int main()
{
    int num1, num2;
    char op;
    //printf("Enter number1, operator and number2: ");
    scanf("%d %c %d", &num1, &op, &num2);
    
    switch (op)
    {
        case '+':
          printf("%d\n", num1+num2);
          break;
        case '-':
          printf("%d\n", num1-num2);
          break;
        case '*':
          printf("%d\n", num1*num2);
          break;
        case '/':
          printf("%d\n", num1/num2);
          break;
        default:
          printf("Invalid operation!\n");
    }
}