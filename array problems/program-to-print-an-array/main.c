/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//PROGRAM TO PRINT AN ARRAY
#include<stdio.h>
int main()
{
    int arr[5]={ 10,20,30,40,50};
    printf("ELEMENTS YOU HAVE ENTERSED ARE:");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
} 

//PROGRAM TO PRINT AN ARRAY UING FUNCTION
#include<stdio.h>
void getarray(int arr[])
{
    int i;
    printf("ELEMENTS ENTERED ARE:");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    getarray(arr);
    return 0;
}
















