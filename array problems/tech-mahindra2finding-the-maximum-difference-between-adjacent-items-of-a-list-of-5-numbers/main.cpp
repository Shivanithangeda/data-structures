/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int findMaxDifference(int a[],int n)
{
	int max=0;
	for(int i=0;i<n-1;i++)
		if(a[i]-a[i+1]>max)
			max=a[i]-a[i+1];
	return max;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<findMaxDifference(a,n);
	return 0;
}