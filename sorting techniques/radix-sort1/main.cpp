/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
//function to get maximum value in array
int getmax(int a[],int n)
{
    int max=a[0];
    for(int k=1;k<n;k++)
    if(a[k]>max)
    max=a[k];
    return max;
}
//function to do counting sort according to significnat digits
// pos( where pos is 10)
void countsort(int a[], int n, int pos)
{
    int b[n],i,count[10]={0};
    //counting occurence of digits
    for(i=0;i<n;i++)
        count[(a[i]/pos)%10]++;
    //changing postion of count so that it appers at actual postion in result
    for(i=1; i<10; i++)
    count[i]=count[i]+count[i-1];
    //output arrayfor
    for(i=n-1; i>=0; i--)
    {
        b[count[(a[i] / pos )%10 ] -1]= a[i];
        count[(a[i] / pos )%10 ]--;
    }
    for(i=0; i<n; i++)
    a[i]=b[i];
    
}
void radixsort(int a[],int n)
{
    int pos, i;
    i= getmax(a,n);
    for(pos=1; i/pos>0; pos*=10)
    countsort(a,n,pos);
}


int main()
{
    int n;
    cout<<" ENTER THE NUMBER OF ELEMENTS TO BE SORTED:";
    cin>>n;
    int a[n];
    cout<<"\n ENTER THE ELEMENTS:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    radixsort(a,n);
    //printing sorted list ;
    cout<<"\nSORTEDLIST:";
    for(int i=0; i<n; i++)
    cout<<a[i]<<"  ";
    return 0;
}



















