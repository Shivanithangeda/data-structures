/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int smallest;
    int arr[10]={18,12, 13, 4, 5,23,6,7,14,15};
    for(int i=1;i<10;i++)
    {
        if(smallest>arr[i])
        smallest=arr[i];
    }
    printf("THE SMALLEST ELEMENT OF AN ARRAY IS %d",smallest);

    return 0;
}