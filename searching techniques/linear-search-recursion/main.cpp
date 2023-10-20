/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int Rlinearsearch(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]=key)
        return i;
        return -1;
    }
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key=30;
    int pos;
    pos=Rlinearsearch(arr,n,key);
    if(pos==-1){
    cout<<"ELEMENT NOT PRESENT:";
    }
    else{
    cout<<"ELEMENT FOUND AT POSITION"<<pos;
    }
    return 0;
}