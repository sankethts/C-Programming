//Print direction based on input char (N/S/E/W)

#include<stdio.h>
int main()
{
    char direction;
    printf("Enter direction: ");
    scanf("%c", &direction);
    
    switch (direction)
    {
        case 'N':
        case 'n':
          printf("North\n");
          break;
        case 'S' :
        case 's':
          printf("South\n");
          break;
        case 'E' :
        case 'e':
          printf("East\n");
          break;
        case 'W':
        case 'w':
          printf("West\n");
          break;
        default:
          printf("Invalid input\n");
    }
}