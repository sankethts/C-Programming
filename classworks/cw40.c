//Generate consecutive NRPS of length n using k distinct character
//non repeating pattern string
#include<stdio.h>
int main()
{
    int k, n;
    printf("Enter the number of characters: ");
    scanf("%d", &k);
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    if(k==1 && n>1)
    {
        printf("Not possible\n");
        return -1;
    }
    char str[k+1];
    printf("Enter %d distinct characters: ", k);
    scanf(" %s", str);
    int i=0, j=0;
    for(i=0; str[i]!='\0'; i++)
    {
        for(j=i+1; str[j]; j++)
        {
            if(str[i]==str[j])
            {
                printf("Invalid input\n");
                return -1;
            }
        }
    }
    char nrps[n+1];
    for(j=0; j<n; j++)
    {
        nrps[j]=str[j%k];
    }
    nrps[j]='\0';
    printf("%s\n", nrps);
}