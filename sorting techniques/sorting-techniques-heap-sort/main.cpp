/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void heapify(int A[],int n,int i)
{
    int largest=i;
    int l=2 * i + 1;
    int r=2 * i + 2;
    
    if(l<n && A[l]>A[largest])
    largest= l;
    if(r< n && A[r] > A[largest])
    largest= r;
    
    if(largest!=i)
    {
        swap(A[i],A[largest]);
        heapify(A,n,largest);
        
    }
}
void heapify(int A[],int n)
{
    for(int i=n/2;i>=1;i--)
    heapify(A,n,i);
    for(int i=n-1;i>=1;i--)
    {
        swap(A[0],A[i]);
        heapify(A,i,0);
    }
}
void printArray(int A[],int n)
{
    for(int i=0;i<n;++i)
    cout<<A[i]<<" ";
    cout<<"\n";
}
int main()
{
    int A[]={22,6,5,7,2};
    int n=sizeof(A)/sizeof(A[0]);
    heapify(A,n);
    cout<<"SORTED ARRAY IS \n";
    printArray(A,n);
}