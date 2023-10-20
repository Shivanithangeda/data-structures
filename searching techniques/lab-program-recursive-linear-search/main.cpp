/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int RecLinearsearch(int A[],int n,int key);
int main()
{
    int n,i,A[30],key,pos=0;
    cout<<"\nENTER THE NO. OF ELEMENTS";
    cin>>n;
    cout<<"\nENTER THE ARRAY ELEMENTS";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"ENTER THE ELEMENT TO BE SEARCHED";
    cin>>key;
    pos=RecLinearsearch(A,n,key);
    if(pos==-1)
    cout<<"\nELEMENT NOT FOUND";
    else
    cout<<"\nELEMENT FOUND AT INDEX"<<pos;
    
}
int RecLinearsearch(int A[],int n,int key)
{
    if(n<0)
    return -1;
    if(A[n]==key)
    return n;
    else
    return RecLinearsearch(A,n-1,key);
}


