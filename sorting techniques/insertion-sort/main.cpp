/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//INSERTION SORT
#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    
    for(int i=1;i<n;i++)
    {
        
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    
}
int main()
{
    int n;
    cout<<" ENTER THE NUMBER OF ELEMENTS TO BE SORTED:";
    cin>>n;
    int arr[50];
    cout<<"\n ENTER THE ELEMENTS:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,n);
    cout<<"\nSORTEDLIST:";
    for(int i=0; i<n; i++)
    cout<<arr[i]<<"";
    return 0;
    
}













