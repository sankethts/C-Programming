

/*
#include<stdio.h>
int main()
{
    int size ,i, ecount=0;
    scanf("%d",&size);
    int arr [size] ,even[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            even[ecount]=arr[i];
            ecount++;
        }
    }
    printf("even array");
    for(i=0;i<ecount;i++)
    {
            printf("%d  ",even[i]);
    }
}





//-----------------------------==============================--22222222--------------serch number in array---------------
#include<stdio.h>
int main ()
{
 int size,i,flag=0,n;
 printf("Enter array size:");
 scanf("%d",&size);
 //printf("enter the elements to search:");
 int arr[size];
 for(i=0;i<size;i++)
 {
     scanf("%d",&arr[i]);
 }
 scanf("%d",&n);
 for(i=0;i<size;i++)
 {
     if(arr[i]==n)
     {
         flag=1;
     }
 }
 if(flag==0)
 {
     printf("not found");
 }
 else
 {
     printf("Element Found");
 }
 
}
//  ////////////////////////////////////////////////3333333333333----find the sum of an array -----------------------------------////////-----------
 #include<stdio.h>
int main ()
{
    int i,sum=0,avg=0;
    int marks[5];
    printf("enter the 5 elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("%d\n",sum);
    printf("%d\n",avg);
}


    //4-------------------------------4444444444----Remove an element from an arrayy--------------------------

    #include<stdio.h>
    int main()
    {
        int a[4]={1,2,3,4,};
        int i,j,remove=3,size=4;
        for(i=0;i<size;i++)
        {
            if(a[i]==remove)
            {
                for(j=i;j<size-1;j++)
                {
                    a[j]=a[j+1];
                }
                size--;
                break;
                


            }
            
        }
        printf("the removed array:");
        for(i=0;i<size;i++)
        {
            printf(" %d ",a[i]);
        }
    }
   //////////////////////////////55--------------55--find the largest number frim array------------
  
  
  
  
   #include<stdio.h>
int main()
{
    int size ,i;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size] ;
    for(i=0;i<size;i++)
    {
        printf("enter the value to the array at given no of size:");
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
           largest=arr[i];
        }
    }
    printf("largest is %d \n",largest);
}

//-------------------------------------------------------difference between largest and smallest value ---------------
 #include<stdio.h>
int main()
{
    int size ,i;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size] ;
    for(i=0;i<size;i++)
    {
        printf("enter the value to the array at given no of size:");
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
           largest=arr[i];
        }
    }
    int smallest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    int diff;
    diff=largest-smallest;

    printf("differece is %d \n",diff);
}
    //-----------------------7. Print prime numbers from an array Input: 2 3 45678
*/
#include<stdio.h>
int main()
{
    int arr[7]={2,3,4,5,6,7,8};
    int flag,i,j,size=7;
    for(i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            continue;
        }
        flag=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf(" %d ",arr[i]);
        }
    }
}
/*
//                        ------------------------8 th one is reverse an array----------------------
#include<stdio.h>
int main()
{
    int size ,i;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    } 
    printf("rversed array:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
//9-----------------------------removeo the duplicate value from array----------

#include<stdio.h>
int main()
{
    int size,j,k,i;
    printf("Enter array size:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements:");
    for(i=0;i<size;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<size-1;k++)
                {
                a[k]=a[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("Unique array elements: ");
    for(j=0;j<size;j++)
    {
        printf("%d ",a[j]);
    }
}

//--------------------------------------------------101001000--find the the maximuum frequency;------------------

#include<stdio.h>
int main()
{
    int size ,i,normalcount=0,finalcount=0,number;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size];
    for(i=0;i<size;i++)
    {
        printf("enter the value to the array at given no of size:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    { 
        normalcount=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                normalcount++;
            }
        }
        if(normalcount>finalcount)
        {
            finalcount=normalcount;
            number=arr[i];
        }
    }
    printf("the max frequency is %d, repated the %d",number,finalcount);
}
//////////////////////////////-------------------11 check the arrays are equal ot not 
#include<stdio.h>
int main ()
{
    int a[3]={1,2,3},flag=0;
    int b[3]={1,2,0};
    for(int i=0;i<3;i++)
    {
        if( a[i]==b[i])
        {
            flag++;
        }
        else
        {
            flag=0;

        }
    }

    if(3==flag)
    {
        printf("same array");

    }
    else
    {
        printf("not correct");
    }
}

//------------------------------------12: palindrome or not check




#include<stdio.h>

int main()
{
    int size, i, flag = 1;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Check palindrome
    for(i = 0; i < size / 2; i++)
    {
        if(arr[i] != arr[size - i - 1])
        {
            flag = 0;
            break;
        }
    }
    
    if(flag == 1)
        printf("Array is palindrome");
    else
        printf("Array is not palindrome");
        
    return 0;
}
        // ==-------------------------------------------shit only one element-----------
        
        
        
#include<stdio.h>

int main()
{
    int size, i, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store first element
    temp = arr[0];

    // Shift elements to left
    for(i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Place first element at last
    arr[size - 1] = temp;

    // Print rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/