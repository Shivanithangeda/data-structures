/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//PROGRAM TO PRINT SUM OF ARRAY
#include <stdio.h>

int main()
{
    int sum=0,i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<=10;i++)
    {
        sum=sum+arr[i];
    }
    printf("THE SUM OF THE WHOLE ARRAY IS %d",sum);
    return 0;
}
