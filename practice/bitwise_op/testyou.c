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

#if 0
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

#if 0
//wap to reverse bits
//Original : 00000000 00000000 00000000 00001101   (13)
//Reversed : 10110000 00000000 00000000 00000000   (11)
unsigned int reverseBits(unsigned int num);
int main()
{
    unsigned int num;

    printf("Enter number: ");
    scanf("%u", &num);

    unsigned int reversed = reverseBits(num);

    printf("Reversed bits: %u\n", reversed);

    return 0;
    
}
unsigned int reverseBits(unsigned int num)
{
    unsigned int result = 0;

    for(int i = 0; i < 8; i++)
    {
        result = (result << 1) | (num & 1);
        num = num >> 1;
    }

    return result;
}
#endif

#if 0
//wap to reverse active bits
//Original : 1101   (13)
//Reversed : 1011   (11)
unsigned int reverseActiveBits(unsigned int num);
int main()
{
    unsigned int num;

    printf("Enter number: ");
    scanf("%u", &num);

    unsigned int reversed = reverseActiveBits(num);

    printf("Reversed bits: %u\n", reversed);

    return 0;
    
}
unsigned int reverseActiveBits(unsigned int num)
{
    unsigned int result = 0;

    while(num)
    {
        result = (result << 1) | (num & 1);
        num >>= 1;
    }

    return result;
}
#endif

#if 0
//wap to reverse bits without using loop
unsigned int reverseBits(unsigned int n)
{
    n = ((n >> 1) & 0x55555555) | ((n << 1) & 0xAAAAAAAA);
    n = ((n >> 2) & 0x33333333) | ((n << 2) & 0xCCCCCCCC);
    n = ((n >> 4) & 0x0F0F0F0F) | ((n << 4) & 0xF0F0F0F0);
    n = ((n >> 8) & 0x00FF00FF) | ((n << 8) & 0xFF00FF00);
    n = ((n >>16) & 0x0000FFFF) | ((n <<16) & 0xFFFF0000);

    return n;
}

int main()
{
    unsigned int num;
    printf("Enter number: ");
    scanf("%u", &num);

    printf("Reversed: %u\n", reverseBits(num));
}
#endif

#if 0
//wap to reverse bits b/w specific position
int reverseRange(int num, int l, int r)
{
    while(l < r)
    {
        int bit1 = (num >> (l-1)) & 1;
        int bit2 = (num >> (r-1)) & 1;

        if(bit1 != bit2)
        {
            num ^= (1 << (l-1));
            num ^= (1 << (r-1));
        }

        l++;
        r--;
    }

    return num;
}

int main()
{
    int num, l, r;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter left and right positions: ");
    scanf("%d %d", &l, &r);

    printf("Result: %d\n", reverseRange(num, l, r));
}
#endif

#if 0
//wap to reverse bits using lookup table
unsigned char reverseTable[256];

void initTable()
{
    for(int i = 0; i < 256; i++)
    {
        unsigned char x = i;
        unsigned char rev = 0;

        for(int j = 0; j < 8; j++)
        {
            rev = (rev << 1) | (x & 1);
            x >>= 1;
        }

        reverseTable[i] = rev;
    }
}

unsigned int reverseBits(unsigned int num)
{
    return (reverseTable[num & 0xFF] << 24) |
           (reverseTable[(num >> 8) & 0xFF] << 16) |
           (reverseTable[(num >> 16) & 0xFF] << 8) |
           (reverseTable[(num >> 24) & 0xFF]);
}

int main()
{
    unsigned int num;

    initTable();

    printf("Enter number: ");
    scanf("%u", &num);

    printf("Reversed: %u\n", reverseBits(num));

    return 0;
}
#endif

#if 0
// Endiann conversion(for 32 bit integer)
unsigned int swapEndian(unsigned int num)
{
    return ((num >> 24) & 0x000000FF) |
           ((num >> 8)  & 0x0000FF00) |
           ((num << 8)  & 0x00FF0000) |
           ((num << 24) & 0xFF000000);
}

int main()
{
    unsigned int num = 0x12345678;

    printf("Original : 0x%X\n", num);

    unsigned int result = swapEndian(num);

    printf("Converted: 0x%X\n", result);

    return 0;
}
#endif

#if 1
// Endiann conversion using loop and bitwise
unsigned int swapEndian(unsigned int num)
{
    unsigned int result = 0;

    for(int i = 0; i < 4; i++)
    {
        result <<= 8;

        result |= (num & 0xFF);

        num >>= 8;
    }

    return result;
}

int main()
{
    unsigned int num = 0x12345678;

    printf("0x%X\n", swapEndian(num));

    return 0;
}
#endif