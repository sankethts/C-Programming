#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#if 0
//WAP to solve the Tower of Hanoi problem for n disks using recursion
void tower_of_hanoi(int n, char source, char auxillary, char destination);
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower_of_hanoi(n, 'A','B', 'C');
    return 0;
}
void tower_of_hanoi(int n, char source, char auxillary, char destination)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary
    tower_of_hanoi(n-1, source, destination, auxillary);

    // Move the largest disk to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move n-1 disks from auxiliary to destination
    tower_of_hanoi(n - 1, auxillary, source, destination);
}
#endif

#if 0
//WAP to generate a n*n magic square
void magicsq(int **ptr, int n);
int main()
{
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    if(n < 0 || n % 2 == 0)
    {
        printf("Order cannot be negetive or order must be odd\n");
        return -1;
    }

    int **ptr = calloc(n, sizeof(int *));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    for(int i=0; i<n; i++)
    {
        ptr[i] = calloc(n, sizeof(int));
    }

    magicsq(ptr, n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void magicsq(int **ptr, int n)
{
    int r = 0;
    int c = n/2;
    int nr, nc;

    for(int num = 1; num <= n*n; num++)
    {
        ptr[r][c] = num;

        nr = r - 1;
        nc = c + 1;

        if(nr < 0)
         nr = n - 1;

        if(nc == n)
         nc = 0;

        if(ptr[nr][nc] != 0)
        {
            r = r + 1;
            if(r == n)
             r = 0;
        }
        else
        {
            r = nr;
            c = nc;
        }
    }
}
#endif

#if 0
//WAP to Find the Frequency of Digits in a String
int main()
{
    char str[30];
    int freq[10] = {0};
    printf("Enter string: ");
    scanf("%[^\n]", str);

    for(int i=0; str[i]; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
         freq[str[i] - '0']++;
    }

    printf("Digit frequencies:\n");
    for(int i=0; i<=9; i++)
    {
        if(freq[i] > 0)
         printf("%d occurs %d times\n", i, freq[i]);
    }
    return 0;
}
#endif

#if 0
//WAP to Find the Pivot Index of an Array
//A pivot index is an index where:
//Sum of elements on the left = Sum of elements on the right
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int tot_sum = 0, left_sum = 0, right_sum = 0;
    printf("Enter elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        tot_sum = tot_sum + arr[i];
    }

    for(int i=0; i<size; i++)
    {
        right_sum = tot_sum - left_sum - arr[i];
        if(left_sum == right_sum)
        {
            printf("%d is pivot index\n", i);
            return 0;
        }
        left_sum += arr[i];
    }
    printf("Pivot index not found\n");
    return 0;
}
#endif

#if 0
//WAP to Replace a User-Input Substring in a Main String
//This program replaces the first occurrence of a substring with another user-provided substring.
int main()
{
    char str[30], old_sub[30], new_sub[30], result[30];
    char *pos = NULL;
    printf("Enter main string: ");
    scanf(" %[^\n]", str);
    printf("Enter substring to replace: ");
    scanf(" %[^\n]", old_sub);
    printf("Enter  new substring to overwrite: ");
    scanf(" %[^\n]", new_sub);

    pos = strstr(str, old_sub);
    if(pos == NULL)
    {
        printf("Substring not found\n");
        return 0;
    }

    int index = pos - str;

    strncpy(result, str, index);
    result[index] = '\0';

    strcat(result, new_sub);

    strcat(result, pos + strlen(old_sub));

    printf("Modified string: %s\n", result);
    return 0;
}
#endif

#if 0
//WAP to map word pattern
/*
Given:
A pattern string (e.g., "abba")
A sentence (e.g., "dog cat cat dog")
Check whether the words follow the same pattern.
Pattern : abba
String  : dog cat cat dog
Output  : Match
a -> dog
b -> cat
b -> cat
a -> dog
*/
bool word_pattern(char *str, char *pattern);
int main()
{
    char str[20];
    char pattern[20];
    printf("Enter pattern: ");
    scanf("%s", pattern);
    printf("Enter string: ");
    scanf(" %[^\n]", str);
    int res = word_pattern(str, pattern);
    if(res == 1)
    {
        printf("Match\n");
    }
    else
    {
        printf("Not match\n");
    }
}
bool word_pattern(char *str, char *pattern)
{
    int count = 0;
    char *words[20];

    char *token = strtok(str, " ");
    while(token)
    {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    if(count != strlen(pattern))
     return false;

    for(int i=0; i<count; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if((pattern[i] == pattern[j]) && strcmp(words[i], words[j]) != 0)
            {
                return false;
            }
            if((pattern[i] != pattern[j]) && strcmp(words[i], words[j]) == 0)
            {
                return false;
            }
        }
    }
    return true;
}
#endif

#if 0
//WAP to check balanced brackets
int main()
{
    char str[100];
    char stack[100];
    int top = -1;

    printf("Enter an expression: ");
    scanf("%[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            stack[++top] = str[i];//Adds an opening bracket to the stack.
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(top == -1)
            {
                printf("Not Balanced\n");
                return 0;
            }

            char ch = stack[top--];//pop top element, Removes the most recent opening bracket.

            if((str[i] == ')' && ch != '(') ||
               (str[i] == '}' && ch != '{') ||
               (str[i] == ']' && ch != '['))
            {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
#endif

#if 0
//WAP to Replace Multiple Spaces with a Single Space
int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // while(str[i] == ' ')
    // {
    //     i++;
    // }

    for(i = 0; str[i] != '\0'; i++)
    {
        str[j++] = str[i];

        if(str[i] == ' ')
        {
            while(str[i + 1] == ' ')
            {
                i++;
            }
        }
    }

    str[j] = '\0';

    printf("Modified String: %s\n", str);

    return 0;
}
#endif

#if 0
// WAP to Print Characters Based on Their Frequency(e.g., a3b2c4 → aaabbcccc)
int main()
{
    char str[100];
    int i = 0;

    printf("Enter encoded string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        char ch = str[i];   // Character
        i++;

        int num = 0;

        // Extract number following the character
        while(str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
            i++;
        }

        // Print character 'num' times
        for(int j = 0; j < num; j++)
        {
            printf("%c", ch);
        }
    }

    printf("\n");

    return 0;
}
#endif

#if 0
// WAP to Print a Matrix in Wave Form
/*
Enter matrix elements:
1 2 3 4 5 6 7 8 9
Elements of an array:
1 2 3 
4 5 6 
7 8 9 
Wave Form:
1 4 7 8 5 2 3 6 9 
*/
int main()
{
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Elements of an array:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Wave Form:\n");

    for(int j = 0; j < cols; j++)
    {
        if(j % 2 == 0)
        {
            // Top to Bottom
            for(int i = 0; i < rows; i++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            // Bottom to Top
            for(int i = rows - 1; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}
#endif

#if 0
// WAP to Print a Matrix in row wise Wave Form
int main()
{
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise Wave Traversal:\n");

    for(int i = 0; i < rows; i++)
    {
        if(i % 2 == 0)
        {
            // Left to Right
            for(int j = 0; j < cols; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            // Right to Left
            for(int j = cols - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}
#endif

#if 0
// WAP Using Structure – Bank Account System
struct BankAccount
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct BankAccount acc;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    printf("\n--- Account Details ---\n");
    printf("Account Number : %d\n", acc.accNo);
    printf("Account Holder : %s\n", acc.name);
    printf("Balance        : %.2f\n", acc.balance);

    // Deposit
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    acc.balance += amount;

    printf("Balance after deposit: %.2f\n", acc.balance);

    // Withdraw
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= acc.balance)
    {
        acc.balance -= amount;
        printf("Balance after withdrawal: %.2f\n", acc.balance);
    }
    else
    {
        printf("Insufficient Balance!\n");
    }

    return 0;
}
#endif

#if 0
//WAP to print palindromic prime numbers
int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int isPalindrome(int n)
{
    int temp = n;
    int rev = 0;

    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (rev == n);
}

int main()
{
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Palindromic Prime Numbers:\n");

    for(int i = start; i <= end; i++)
    {
        if(isPrime(i) && isPalindrome(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
#endif

#if 0
//WAP to print pascals triangle
/*
Pascal's Triangle is a triangular arrangement of numbers where:
First and last element of every row is 1
Every other element is the sum of the two elements directly above it
*/
int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int num = 1;

        for(int s = 0; s < n - i - 1; s++)
        {
            printf(" ");
        }

        for(int j = 0; j <= i; j++)
        {
            printf("%d ", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
#endif

#if 0
//WAP to Convert Time in to Words
int main()
{
    int h, m;

    char *words[] = {
        "Zero", "One", "Two", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten", "Eleven",
        "Twelve", "Thirteen", "Fourteen", "Fifteen",
        "Sixteen", "Seventeen", "Eighteen", "Nineteen",
        "Twenty", "Twenty One", "Twenty Two", "Twenty Three",
        "Twenty Four", "Twenty Five", "Twenty Six",
        "Twenty Seven", "Twenty Eight", "Twenty Nine"
    };

    printf("Enter hour (1-12): ");
    scanf("%d", &h);

    printf("Enter minutes (0-59): ");
    scanf("%d", &m);

    if(m == 0)
    {
        printf("%s O' Clock\n", words[h]);
    }
    else if(m == 15)
    {
        printf("Quarter Past %s\n", words[h]);
    }
    else if(m == 30)
    {
        printf("Half Past %s\n", words[h]);
    }
    else if(m == 45)
    {
        printf("Quarter To %s\n", words[(h % 12) + 1]);
    }
    else if(m < 30)
    {
        if(m == 1)
            printf("One Minute Past %s\n", words[h]);
        else
            printf("%s Minutes Past %s\n", words[m], words[h]);
    }
    else
    {
        int rem = 60 - m;

        if(rem == 1)
            printf("One Minute To %s\n", words[(h % 12) + 1]);
        else
            printf("%s Minutes To %s\n",
                   words[rem],
                   words[(h % 12) + 1]);
    }

    return 0;
}
#endif

#if 0
//WAP to Print All Subsets (Power Set) Using Bitwise Representation
int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int totalSubsets = 1 << n;   // 2^n

    printf("\nPower Set:\n");

    for(int mask = 0; mask < totalSubsets; mask++)
    {
        printf("{ ");

        for(int j = 0; j < n; j++)
        {
            if(mask & (1 << j))
            {
                printf("%d ", arr[j]);
            }
        }

        printf("}\n");
    }

    return 0;
}
#endif

#if 0
//WAP: If a Zero is Found in a 2D Matrix, Make Its Entire Row and Column Zero
int main()
{
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int row[rows];
    int col[cols];

    // Initialize arrays
    for(int i = 0; i < rows; i++)
        row[i] = 0;

    for(int j = 0; j < cols; j++)
        col[j] = 0;

    // Mark rows and columns containing 0
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Make rows and columns zero
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 0;
            }
        }
    }

    printf("\nModified Matrix:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#endif

#if 0
//WAP to sort elements in 2d array
int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int temp[r*c];
    
    printf("Enter elements of 2d array: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int k = 0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            temp[k++] = arr[i][j];
        }
    }

    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-i-1;j++)
        {
            if(temp[j] > temp[j+1])
            {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }

    k = 0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j] = temp[k++];
        }
    }

    printf("Sorted Matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#endif

#if 0
//WAP to Divide Even and Odd Elements Without Using an Extra Array
int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        while(left < right && arr[left] % 2 == 0)
        {
            left++;
        }

        while(left < right && arr[right] % 2 != 0)
        {
            right--;
        }

        if(left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    printf("Array after separating even and odd:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#endif

#if 0
//WAP to reverse vowel in a string
int isVowel(char ch)
{
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int left = 0;
    int right = strlen(str) - 1;

    while(left < right)
    {
        while(left < right && !isVowel(str[left]))
        {
            left++;
        }

        while(left < right && !isVowel(str[right]))
        {
            right--;
        }

        if(left < right)
        {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;

            left++;
            right--;
        }
    }

    printf("String after reversing vowels: %s\n", str);

    return 0;
}
#endif

#if 0
//WAP to check toeplitz matrix
int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int isToeplitz = 1;

    for(int i = 1; i < r; i++)
    {
        for(int j = 1; j < c; j++)
        {
            if(arr[i][j] != arr[i - 1][j - 1])
            {
                isToeplitz = 0;
                break;
            }
        }

        if(!isToeplitz)
            break;
    }

    if(isToeplitz)
        printf("Toeplitz Matrix\n");
    else
        printf("Not a Toeplitz Matrix\n");

    return 0;
}
#endif

#if 0
//WAP to Check if a String Can Become a Palindrome by Deleting At Most One Character
int isPalindrome(char str[], int left, int right)
{
    while(left < right)
    {
        if(str[left] != str[right])
            return 0;

        left++;
        right--;
    }

    return 1;
}

int validPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right)
    {
        if(str[left] != str[right])
        {
            return isPalindrome(str, left + 1, right) ||
                   isPalindrome(str, left, right - 1);
        }

        left++;
        right--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    if(validPalindrome(str))
        printf("Can become palindrome\n");
    else
        printf("Cannot become palindrome\n");

    return 0;
}
#endif

#if 0
//WAP to Replace Specific Character Sequences in a String (bbc→$,bbe→&,bb→@)
int main()
{
    char str[100];
    int i = 0;

    printf("Enter string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        if (str[i] == 'b' && str[i+1] == 'b' && str[i+2] == 'c')
        {
            printf("$");
            i += 3;
        }
        else if (str[i] == 'b' && str[i+1] == 'b' && str[i+2] == 'e')
        {
            printf("&");
            i += 3;
        }
        else if (str[i] == 'b' && str[i+1] == 'b')
        {
            printf("@");
            i += 2;
        }
        else
        {
            printf("%c", str[i]);
            i++;
        }
    }

    return 0;
}
#endif

#if 0
/*
A truck is carrying a box through a tunnel.
Tunnel dimensions: Height (H), Width (W), Length (L)
Box dimensions: height (h), width (w), length (l)
The box can pass through the tunnel only if all its dimensions are 
less than or equal to the corresponding tunnel dimensions.
*/
int main()
{
    int H, W, L;
    int h, w, l;

    scanf("%d %d %d", &H, &W, &L);
    scanf("%d %d %d", &h, &w, &l);

    int tunnelVol = H * W * L;
    int boxVol = h * w * l;

    if (boxVol <= tunnelVol)
        printf("Box volume fits within tunnel volume.\n");
    else
        printf("Box volume exceeds tunnel volume.\n");

    return 0;
}
#endif

#if 1
//
int main()
{
    int H, W, L;
    int h, w, l;

    scanf("%d %d %d", &H, &W, &L);
    scanf("%d %d %d", &h, &w, &l);

    int tunnelVol = H * W * L;
    int boxVol = h * w * l;

    if (boxVol <= tunnelVol)
        printf("Box volume fits within tunnel volume.\n");
    else
        printf("Box volume exceeds tunnel volume.\n");

    return 0;
}
#endif