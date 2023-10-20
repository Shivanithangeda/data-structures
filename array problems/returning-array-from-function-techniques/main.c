/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//
/*#include<stdio.h>
int *getarray()
{
    int arr[5];
    printf("Enter the elements in array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}
int main()
{
    int *n;
    n=getarray();
    printf("\nElements in array are:");
    for(int i=0;i<5;i++)
    {
        printf("%d",n[i]);
    }
    return 0;
} */
//In the above program, getarray() function returns a variable 'arr'. 
//It returns a local variable, but it is an illegal memory location to be returned, which is allocated within a function in the stack. 
//Since the program control comes back to the main() function, and all the variables in a stack are freed.
//Therefore, we can say that this program is returning memory location, which is already de-allocated, 
//so the output of the program is a segmentation fault.


//Reurning array by passing an array which is to be returned
//as a parameter to the function.

/*#include<stdio.h>
int *getarray(int *a)
{
    printf("ENTER THE ELEMENTS:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    return a;
}
int main()
{

    int a[5];
    int *n=getarray(a);
    printf("\nenter the elements:");
    for(int i=0;i<5;i++)
    {
        printf("%d",n[i]);
    }
} */




//returning array using malloc() function DYNAMICALLY ALLOCATING MEMMORY
/*
#include<stdio.h>

#include<malloc.h>
int *getarray()
{
    int n;                                               //n=size
    printf("ENTER THE size of array:");
    scanf("%d",&n);
    int *p=malloc(sizeof(n));
    printf("ENTER TH ELEMNETS OF ARRAY");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    return p;
}
int main()
{
    int *ptr;
    ptr=getarray();
    int length=sizeof(*ptr);
    printf("elements you have entered are:");
    for(int i=0;ptr[i]!='\0';i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
} */

//RETURNING ARRAY USING STATIC variables
/*#include<stdio.h>
int getarray()
{
    static int arr[5];
    printf("enter the eleements: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}
int main()
{
    int *ptr;
    ptr=getarray();
    printf("\nELEMENTS YOU ENETERED ARE:");
    for(int i=0;i<5;i++)
    {
        printf("%d",ptr[i]);
    }
} */


//USING STRUCTURE 
/*
#include <stdio.h>  
#include<malloc.h>  
struct array  
{  
    int arr[8];  
};  
struct array getarray()  
{  
    struct array y;  
    printf("Enter the elements in an array : ");  
    for(int i=0;i<8;i++)  
    {  
        scanf("%d",&y.arr[i]);  
    }  
    return y;  
}  
int main()  
{  
  struct array x=getarray();  
  printf("Elements that you have entered are :");  
  for(int i=0;x.arr[i]!='\0';i++)  
  {  
      printf("%d ", x.arr[i]);  
  }  
    return 0;  
}  
*/














