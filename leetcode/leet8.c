#include<stdio.h>
#include<limits.h>
int myAtoi(char *s);
int main()
{
    char s[30];
    scanf("%[^\n]", s);
    int num=myAtoi(s);
    printf("%d\n", num);
}
int myAtoi(char* s) 
{
    int i=0, rev=0, sign=0, digit=0;
    while(s[i])
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }
        
        if (s[i] == '-')
          sign=1;

        if ((s[i] == '-' && s[i+1] == '-') || (s[i] == '+' && s[i+1] == '+') || 
           (s[i] == '-' && s[i+1] == '+') || (s[i] == '+' && s[i+1] == '-'))
          return 0;
        
        digit = s[i] - '0';
        if (rev > INT_MAX / 10 ||
            (rev == INT_MAX / 10 &&
             ((sign == 1 && digit > 7) ||
              (sign == -1 && digit > 8))))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        
        if (s[i] == '0' && ((s[i+1]>='0' && s[i+1]<='9')))
        {
            i++;
            continue;
        }
        
        if(s[i] == '0' && (!(s[i+1]>='0' && s[i+1]<='9')))
          return 0;

        if ((s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z'))
          return 0;

        if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            if (sign==1)
              return -rev;
            else
              return rev;
        }
        if (s[i]>='0' && s[i]<='9')  
          rev = rev * 10 + digit;

        i++;
    }
    if(sign==1)
    return -rev;
    else
    return rev;  
}

#if 0
//chatgpt given
int myAtoi(char *s)
{
    int i = 0;
    int sign = 1;
    long long num = 0;
    int digit;

    // Skip leading whitespaces
    while (s[i] == ' ')
    {
        i++;
    }

    // Check sign
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    // Read digits
    while (s[i] >= '0' && s[i] <= '9')
    {
        digit = s[i] - '0';

        // Check overflow
        if (num > INT_MAX / 10 ||
            (num == INT_MAX / 10 &&
             ((sign == 1 && digit > 7) ||
              (sign == -1 && digit > 8))))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        num = num * 10 + digit;
        i++;
    }

    return sign * num;
}
#endif