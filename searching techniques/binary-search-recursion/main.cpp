/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int RecursiveBinarySearch(int A[],int l,int r,int key,int num)
{
    if(l<r){
        int mid=(l+r)/2;
        if(A[mid]==key)
        return mid;
        if(A[mid]<key)
        return RecursiveBinarySearch(A,l,mid+1,num);
        if(A[mid]>key)
        return RecursiveBinarySearch(A,r,mid-1,num);
        
    }
    return -1;
    
}
int main()
{
    int A[]={5,9,2,6,1,8};
    int n=sizeof(A)/sizeof(A[0]);
    int key=6;
    int num,pos;
    if(pos==-1){
        cout<<key<<"ELEMENT NOT FOUND";
    }
    else{
        cout<<key<<"ELEMENT PRESENT AT POSITION"<<pos;
        return 0;
        
    }
}