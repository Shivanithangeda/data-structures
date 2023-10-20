/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[6]={88,77,23,109,34,76};
    int largest,secondlarge,i;
    if(a[0]>a[1]){
        largest=a[0];
        secondlarge=a[1];
    }
    else{
        largest=a[1];
        secondlarge=a[0];
    }
    
    for(i=2;i<6;i++)
    {
        if(largest<a[i])
        {
        secondlarge=largest;
        largest=a[i];
        }
        else if(secondlarge<a[i])
        {
        secondlarge=a[i];
            
        }
    }
    printf("largest -%d \nsecondlarge -%d\n",largest,secondlarge);
    return 0;
    }
