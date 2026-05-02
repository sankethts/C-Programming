#include<stdio.h>
#if 0
//Check Whether Number is Even or Odd
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num&1)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }
}
#endif

#if 0
//Swap Two Numbers Using XOR
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a=%d b=%d\n", a, b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("After swapping: a=%d b=%d\n", a, b);
}
#endif

#if 0
//Multiply Number by 2 Using Left Shift
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Num: %d\n", num<<1);
}
#endif

#if 0
//Divide Number by 2 Using Right Shift
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Num: %d\n", num>>1);
}
#endif

#if 0
//Check kth Bit is Set or Not
int main()
{
    int num, k;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter bit: ");
    scanf("%d", &k);
    if(num & 1<<k)
    {
        printf("It is set\n");
    }
    else
    {
        printf("Not set\n");
    }
}
#endif

#if 0
//Set kth Bit, clear kth bit, toggle kth bit
int main()
{
    int num, k;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter bit: ");
    scanf("%d", &k);
    
    printf("After setting %d bit\n", k);
    printf("num: %d\n", num | 1<<k);
    
    printf("After clearing %d bit\n", k);
    printf("num: %d\n", num & ~(1<<k));

    printf("After toggling %d bit\n", k);
    printf("num: %d\n", num ^ (1<<k));
}
#endif

#if 0
//Count Number of Set Bits
int main()
{
    int num, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num)
    {
        num = num & (num-1);
        count++;
    }
    printf("NUmber of set bits: %d\n", count);
}
#endif

#if 0
//Count Number of Unset Bits
int main()
{
    int num, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num)
    {
        num = num & (num-1);
        count++;
    }
    printf("NUmber of unset bits: %d\n", 32 - count);
}
#endif

#if 0
//Print Binary Representation
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=31; i>=0; i--)
    {
        printf("%d ", ((num>>i)&1));
    }
    printf("\n");
}
#endif

#if 0
//Find MSB (Most Significant set Bit position)
//Keep shifting right until number becomes 0.
int main()
{
    int num, pos=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num)
    {
        num=num>>1;
        pos++;
    }
    printf("MSB Position: %d\n", pos-1);
}
#endif

#if 0
//Find LSB (Least Significant Set Bit Position)
//check first set bit from right
int main()
{
    int num, pos=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while((num&1)==0)
    {
        num=num>>1;
        pos++;
    }
    printf("LSB Position: %d\n", pos);
}
#endif

#if 0
//Check Whether Number is Power of 2
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if((num&(num-1))==0)
    {
        printf("It is power of 2\n");
    }
    else
     printf("Not a power of 2\n");
}
#endif

#if 0
//Check Whether Number is Power of 2
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if((num&(num-1))==0)
    {
        printf("It is power of 2\n");
    }
    else
     printf("Not a power of 2\n");
}
#endif

#if 0
//Remove Last Set Bit
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    num=(num&(num-1));
    printf("Num: %d\n", num);
}
#endif

#if 0
//Get Rightmost Set Bit
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("num: %d\n", num&(-num));
}
#endif

#if 0
//Rotate Bits Left
int main()
{
    int num, pos;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    num = (num<<pos) | ((unsigned)num >> (32-pos));
    for(int i=31; i>=0; i--)
    {
        printf("%d ", (num>>i)&1);
    }
    printf("\n");
}
#endif

#if 0
//Rotate Bits right
int main()
{
    int num, pos;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    num = ((unsigned)num>>pos) | (num << (32-pos));
    for(int i=31; i>=0; i--)
    {
        printf("%d ", (num>>i)&1);
    }
    printf("\n");
}
#endif

#if 0
//Count Leading Zeros
//Count zeros before first set bit from MSB side
int main()
{
    int num, pos=0, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=31; i>=0; i--)
    {
        if((num>>i)&1)
         break;
        count++;  
    }
    printf("count: %d\n", count);
}
#endif

#if 0
//Count Trailing Zeros
//Count zeros from right until first set bit.
int main()
{
    int num, pos=0, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=0; i<=31; i++)
    {
        if((num>>i)&1)
         break;
        count++;  
    }
    printf("count: %d\n", count);
}
#endif

#if 0
//Find Parity of Number
//Even parity → even number of set bits
//Odd parity → odd number of set bits
int main()
{
    int num, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=31; i>=0; i--)
    {
        if((num>>i)&1)
         count++;  
    }
    if(count%2==0)
     printf("Even parity\n");
    else
     printf("Odd parity\n");
}
#endif

#if 0
//Find Unique Element (All Others Repeated Twice)
int main()
{
    int arr[5]={1,2,1,3,2};
    int result=0;
    for(int i=0; i<5; i++)
    {
        result=result^arr[i];
    }
    printf("Result: %d\n", result);
}
#endif

#if 0
//Find Two Unique Elements(Every element repeats twice except two numbers)
int main()
{
    int arr[]={2,4,7,9,2,4};
    int n=6, xr=0;
    for(int i=0; i<6; i++)
    {
        xr=xr^arr[i];
    }
    printf("xr: %d\n", xr);
    int setbit=xr & -xr;//give position of last set bit from lsb
    printf("setbit: %d\n", setbit);
    int x=0, y=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]&setbit)
         x=x^arr[i];
        else
         y=y^arr[i];
    }
    printf("unique elements: %d %d\n", x, y);
}
#endif

#if 0
//Find Missing Number Using XOR
int main()
{
    int arr[]={1,2,4,5};
    int n=5;
    int xr=0;
    for(int i=1; i<=n; i++)
    {
        xr=xr^i;//xor with all numbers from 1 to n
    }
    for(int i=0; i<n-1; i++)
    {
        xr=xr^arr[i];//xor with all array elements
    }
    printf("Missing element: %d\n", xr);
}
#endif

#if 1
//Add Two Numbers Without '+' Operator
//XOR gives sum without carry
//AND + shift gives carry
int main()
{
    int a=10, b=20;
    while(b!=0)
    {
        int carry=(a&b)<<1;
        a=a^b;
        b=carry;
    }
    printf("Sum: %d\n", a);
}
#endif