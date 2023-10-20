/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//PASSING ARRAY TO FUNCTION
/*
#include<stdio.h>
void getarray(int arr[])
{
    int i;
    printf("Enter the elements:");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[5]={10, 20, 30, 40, 50};
    getarray(arr);
    return 0;
}*/

//PASSING ARRAY TO A FUNCTION AS POINTER
/*
#include<stdio.h>
void
getarray (char *arr)
{
  printf ("enter array elements:");
  for (int i = 0; i < 7; i++)
    {
      printf ("%c", arr[i]);
    }
}

int
main ()
{
  char arr[7] = { 's', 'h', 'i', 'v', 'a', 'n', 'i' };
  getarray (arr);
  return 0;
} */

