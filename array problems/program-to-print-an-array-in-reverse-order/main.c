/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//PROGRAM TO PRINT AN ARRAY IN REVERSE ORDER
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("the elementes you have entered in reverse order are:");
    for(int i=9;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
} 

//PROGRAM TO PRINT AN ARRAY IN REVERSE ORDER USING FUNCTION
#include<stdio.h>
void reverse(int arr[])
{
    printf("ELEMENTS IN THE REVERSE ORDER ARE:");
    for(int i=9;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr);
    return 0;
}
    
    
    
    
    
    
    
    