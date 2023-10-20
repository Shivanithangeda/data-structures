/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
//counting sort algorithm
void CountingSort(int inputarray[],int s,int r )  //size and range
{
    int outputarray[s];
    int countarray[r];
    //initialize all elements to 0 in count array
    for(int i=0;i<r;i++)
    {
        countarray[i]=0;
    }
    //to take count of all elements i  the input array
    for(int i=0;i<s;i++)
    {
        ++countarray[inputarray[i]];
    }
    //cumulative cout of count array to get the position if elements
    //to be stored in output array
    for(int i=1;i<r;i++)
    {
        countarray[i]=countarray[i]+countarray[i-1];
    }
    for(int i=1;i<r;i++)
    {
        countarray[i]=countarray[i]-countarray[i-1];
    }
    //placing input array elements into out[put array in proper positions
    //such thst the result is a sorted array in asc order
    for(int i=0;i<s;i++)
    {
        outputarray[--countarray[inputarray[i]]]=inputarray[i];
    }
    //copy ooyput array elements to input array
    for(int i=0;i<s;i++)
    {
        inputarray[i]=outputarray[i];
    }
    
}



int main()
{
    int size=0;
    int range=10;
    
    cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
    cin>>size;
    int myarray[size];
    
    cout<<"enter"<<size<<"integers in any order in range of 0-9:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>myarray[i];
    }
    
    cout<<"BEFORE SORTING"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<myarray[i]<<" ";
    }
    cout<<endl;
    
    CountingSort(myarray,size,range);   //counting sort called
    
    cout<<"AFTER SORTING"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<myarray[i]<<" ";
    }
   return 