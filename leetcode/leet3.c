//3) Longest substring without repeating characters
//find the length of the longest substring without duplicate characters.
#include<stdio.h>
int len_sub(char *str);
int main()
{
    char str[30];
    printf("Enter string: ");//pwwkew
    scanf("%[^\n]", str);
    int len = len_sub(str);
    printf("Length of longest substring: %d\n", len);//3 wke
    return 0;
}
int len_sub(char *str)
{
    int i, j, duplicate=0, count=0, maxcount=0;
    for(i=0; str[i]; i++)
    {
        count=0;
        for(j=i; str[j]; j++)
        {
            int left=i;
            int right=j;
            duplicate=0;
            while(left<right)
            {
                if(str[left] == str[right])
                {
                    duplicate=1;
                    break;
                }
                left++;
            }
            if(duplicate)
             break;

            count++;
            if(count>maxcount)
             maxcount=count;
        }
    }
    return maxcount;
}