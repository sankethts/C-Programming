////WAP to find which day of the year
#if 0
#include<stdio.h>
int main()
{
  int n, first_day, day;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  
  if (n>=1 && n<=365)
  {
    printf("Choose first day:\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    printf("Enter the option to set first day: ");
    scanf("%d", &first_day);
    if (first_day>=1 && first_day<=7)
    {
        day=((n+first_day)-1)%7;
        switch (day)
        {
            case 1:
            printf("The day is Sunday\n");
            break;
            case 2:
            printf("The day is Monday\n");
            break;
            case 3:
            printf("The day is Tuesday\n");
            break;
            case 4:
            printf("The day is Wednesday\n");
            break;
            case 5:
            printf("The day is Thursday\n");
            break;
            case 6:
            printf("The day is Friday\n");
            break;
            case 0:
            printf("The day is Saturday\n");
            break;
        }
    }
    else
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
    }
  }
  else
  {
    printf("Error: Invalid input, n value should be >0 and <= 365\n");
  }
}
#endif

#include<stdio.h>
int main()
{
  int n, first_day, day;
  printf("Enter n: ");// Enter the day (1 to 365)
  do
  {
    scanf("%d", &n);
    if (n < 1 || n > 365)
    {
      printf("Enter valid n(1 to 365): ");
    }
  }while (n < 1 || n > 365);

  printf("Choose first day:\n1) Sunday\n2) Monday\n3) Tuesday\n4) Wednesday\n5) Thursday\n6) Friday\n7) Saturday\n");
  printf("Enter first_day: ");
  do
  {
    scanf("%d", &first_day);
    if (first_day < 1 || first_day > 7)
    {
      printf("Enter valid first_day: ");
    }
  }while (first_day < 1 || first_day > 7);

  day = ((n+first_day)-1)%7;
  switch(day)
  {
    case 1:
      printf("Sunday\n");
      break;
    case 2:
      printf("Monday\n");
      break;
    case 3:
      printf("Tuesday\n");
      break;
    case 4:
      printf("Wednesday\n");
      break;
    case 5:
      printf("Thursday\n");
      break;
    case 6:
      printf("Friday\n");
      break;
    case 0:
      printf("Saturday\n");
      break;
  }
  return 0;
}