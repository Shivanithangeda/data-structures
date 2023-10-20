/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//LAB EXECUTION PROGRAMS
//ITERATIVE BINARY SEARCH


// #include<iostream>
// using namespace std;
// int irBinarysearch(int A[],int key,int l,int r);
// int main()
// {
//     int l,r,i,A[30],key,pos,n;
//     cout<<"\nENTER THE NO. OF ELEMENTS";
//     cin>>n;
//     cout<<"\nENTER THE ARRAY ELEMENTS";
//     for(i=0;i<n;i++)
//     {
//         cin>>A[i];
//     }
//     cout<<"ENTER THE ELEMENT TO BE SEARCHED";
//     cin>>key;
//     pos=irBinarysearch(A,0,4,key);
//     if(pos==-1)
//     cout<<"\nELEMENT NOT FOUND";
//     else
//     cout<<"\nELEMENT FOUND AT INDEX"<<pos;
    
// }
// int irBinarysearch(int A[],int l,int r,int key)
// {
    
//     int mid,pos=-1;
//     while(l<=r)
//     {
//         mid=(l+r)/2;
//         if(A[mid]==key)
//         return mid;
//         else if(A[mid]>key)
//         r=mid-1;
//         else
//         l=mid+1;
//     }
//     return pos;
// }

#include<stdio.h>
int binary(int a[],int t,int l,int r);
void main(){
    int 
    printf("how many elements you want to enter:");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n enter element to be searched:");
    scanf("%d",&x);
    res=Binary(a,x,0,n-1);
    if(res==-1)
    printf("%delement founf at index %d",x);
    else
    printf("%delement isnot  found at index %d",x);
    
    
    
    
}
