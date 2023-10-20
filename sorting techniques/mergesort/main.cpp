/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void mergeofarrays(int a[], int low, int mid, int high)
{
  int i = low, j = mid + 1, index = low, temp[100], k;
  while ((i <= mid) && (j <= high))
  {
    if (a[i] < a[j]) {
      temp[index] = a[i];
      i++;
    } else {
      temp[index] = a[j];
      j++;
    }
    index++;
  }
  
  if (i > mid) {
    while (j <= high) {
      temp[index] = a[j];
      j++;
      index++;
    }
  } else 
  {
    while (i <= mid) {
      temp[index] = a[i];
      i++;
      index++;
    }
  }
  for (k = low; k < index; k++) 
  {
    a[k] = temp[k];
  }
}
void mergesort(int a[], int low, int high) {
  if (low < high) {
    int middle = (low + high) / 2; //calculating middle index of array to divide it in two halves
    mergesort(a, low, middle); //sorting first half
    mergesort(a, middle + 1, high); //sorting second half
    mergeofarrays(a, low, middle, high); //merging 2 sorted halves
  }
}
int main() {
  int n = 7;
  int a[50] = {54,34,23,10,98,2,3};
  mergesort(a, 0, 6);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

/*
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,index=lb,b[50],k;    //b=temp
    
    while((i<=mid)&&(j<=ub))
    {
        if(a[i]<a[j])
        {
            b[index]=a[i];
            
            i++;
        }else{
            b[index]=a[j];
            
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=ub){
            b[index]=a[j];
            j++;
            index++;
        }
    } else{
        while(i<=mid){
            b[index]=a[i];
            i++;
            index++;
        }
    }
    for(k=lb;k<=index;k++){
        a[k]=b[k];
    }
}
void mergesort(int a[],int lb,int ub)
{
    
     if(lb<ub)
     {
        int mid=(lb+ub)/2;
         mergesort(a,lb,mid);
         mergesort(a,mid+1,ub);
         merge(a,lb,ub,mid);
     }
} */
