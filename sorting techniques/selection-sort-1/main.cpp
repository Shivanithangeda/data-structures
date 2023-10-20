/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int selctionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        }
    }
        cout<<"sorted array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
            cout<<"\n";
        }
}
int main()
{
    
    int arr[50], i, n, step, temp;
    // ask user for number of elements to be sorted
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    // input elements if the array
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    selctionsort(arr,n);
}

