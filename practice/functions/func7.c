//waf to find area of circle

#include<stdio.h>

void circle(int r)
{
    float pi=3.14;
    printf("Area of circle is: %g\n", pi*r*r);
}
int main()
{
    int rad;
    printf("Enter the radius of circle: ");
    scanf("%d", &rad);
    circle(rad);
}
    