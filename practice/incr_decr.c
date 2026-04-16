/*#include <stdio.h>
int main()
{
int num = 5;
num = num + 1;
int res;
res = 0;
res = res + 1;
num++;
res++;
res = num;
printf("%d\n",res);
}
*/
/*#include <stdio.h>
int main()
{
int num1 = 45;
num1++;
int num2 = 34;
num2++;
num1 = num1 + num2;
num2++;
num2 = num1++;
printf("The value of num1 is : %d\n",num2);
printf("The value of num2 is : %d\n",num1);
}

#include <stdio.h>
int main()
{
int num1 = 0;
num1++;
num1++;
num1++;
int r;
r = num1;
num1= 0;
r = r + 1;
r = r * 2;
r++;
printf("%d\n",r);
printf("%d\n",num1);
}

#include <stdio.h>
int main()
{
int num1 = 0;
num1--;
num1--;
num1--;
int r;
r = num1;
num1= 0;
r = r + 1;
r = num1;
r = r * 2;
r++;
printf("%d\n",r);
printf("%d\n",num1);
}

#include <stdio.h>
int main()
{
int num1 = 0;
int res;
res = num1-- ;
res = res * 2;
int m;
m = 3 + res- 2 * 3;
printf("%d\n%d\n",m,res);
}

#include <stdio.h>
int main()
{
int num1 = 0;
int r = num1 + 1;
num1++;
r = num1 + ( 3 * 4) + 4 * 3;
printf("%d", r);
}

#include <stdio.h>
int main()
{
int num1 = 0;
num1 = 4 > 5;
num1 = num1 + 1;
int res = num1 % 2;
res++;
res--;
num1 = res++;
printf("%d\n",res);
printf("%d\n",num1);
}

#include <stdio.h>
int main()
{
int num1 = 0;
int res = num1 / 2 * 3 + 3 && 3 || 4 + 2 ;
res = res + 1;
res--;
num1 = res * 4 ;
num1 = 4 * (res++);
printf("The num1 value is: %d\nThe res value is : %d\n",num1,res);
}

#include <stdio.h>
int main()
{
int num1 = 6 * 4 + 4;
num1 = num1 > 0 && 4;
num1++;
int num2 = num1;
int num3 = num2++;
num1 = num3--;
num2 = num3++;
int res = num1 + num2;
printf("The res is : %d\n",res);
printf("The num1 is : %d\n",num1);
printf("The num2 is : %d\n",num2);
}

#include <stdio.h>
int main()
{
int res = !(-2);
printf("%d\n",res);
res = res && 0 || 5 + 3- 3 * 2;
printf("%d\n",res);
}

#include <stdio.h>
int main()
{
int num = 0 && 3 * 2- 4 > 5 <= 4;
num = num + 1;
int res = num;
res++;
res++;
res++;
res--;
res--;
printf("%d\n",res);
num = res;
res = num;
res = res+ num + 4 * 2;
printf("%d\n",res);
}

#include <stdio.h>
int main()
{
int res = 2 && 3 || 6 > 0 < 4;
res = res * 2;
int value;
value = res * 3;
value++;
res++;
value = res;
res = 4;
res = value * 32;
value = res > 0;
printf("The res is : %d\n",res);
printf("The value is : %d\n",value);
}

#include <stdio.h>
int main()
{
int num1 = 0;
int res = num1 + 4 * 4 + 3 * 0;
res = res + 1;
num1++;
res++;
res = num1- 0;
printf("The res is : %d\n",res);
printf("The num1 is : %d\n",num1);
}

#include <stdio.h>
int main()
{
int num1 = 6 * 4 + 4;
num1--;
num1++;
int res = num1++;
num1 = res;
res = !(num1);
printf("The res is : %d\n",res);
printf("The num1 is : %d\n",num1);
}
*/
#include <stdio.h>
int main()
{
int num1 = 0;
num1++;
int res = num1 > 0 <= 2;
num1 = res > 0;
num1 = num1 + res;
res = num1++;
res = num1 + 3- 4 * 3 + 0;
res = res > 0;
res = num1 + 2 / 4 * 5- 7 >= 0 <= 4;
printf("The res is : %d\n",res);
printf("The num1 value is : %d\n",num1);
}

