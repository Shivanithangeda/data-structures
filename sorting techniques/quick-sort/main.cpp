/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void quicksort(int arr[],int Lb,int Ub)
{
 int start,end,pivot,temp;
if(Lb<Ub)
{
start=Lb;
end=Ub;
pivot=start;
while(start<end)
{
while((arr[start]<=arr[pivot])&&(start<Ub))start++;
while(arr[end]>arr[pivot])
end--;
if(start<end)
{
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
}/*endif*/
}
temp=arr[pivot];
 arr[pivot]=arr[end];
 arr[end]=temp;
 quicksort( arr,Lb,end-1);
 quicksort( arr,end+1,Ub);
}
}
int main()
{
 int n,i;
 int list[30];
cout<<"enter no of elements\n";
cin>>n;
cout<<"enter "<<n<<" numbers ";
for(i=0;i<n;i++)
cin>>list[i];
quicksort(list,0,n-1);
cout<<" after sorting\n";
for(i=0;i<n;i++)
cout<<list[i]<<endl;
return 0;
}
