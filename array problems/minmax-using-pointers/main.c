/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int minmax(int arr[],int len,int *min,int *max)
{
    
    *min= *max= arr[0];
    for(int i=0;i<len;i++)
    {
    if(*max>arr[i])
    *max=arr[i];
    else if(*min<arr[i])
    *min=arr[i];
    }
}

int main()
{
    int min,max;
    int arr[]={101,45,57,44,781,65,13,15};
    int len=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,len,&min,&max);
    printf("maximun elemennt in array is %d\n minimum element in array is %d\n");

    return 0;
}
