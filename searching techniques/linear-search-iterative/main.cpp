/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[10], i, num, n, flag=0, pos;
// 	cout<<"Enter the array size : ";
// 	cin>>n;
// 	cout<<"Enter Array Elements : ";
// 	for(i=0; i<n; i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	cout<<"Enter the number to be search : ";
// 	cin>>num;
// 	for(i=0; i<n; i++)
// 	{
// 		if(arr[i]==num)
// 		{
// 			flag=1;
// 			pos=i+1;
// 			break;
// 		}
// 	}
// 	if(flag==0)
// 	{
// 		cout<<"Number not found..!!";
// 	}
// 	else
// 	{
// 		cout<<num<<" found at position "<<pos;
// 	}
// }


#include<stdio.h>

// int linearSearch(int arr[],int n,int key){
   
 
// }

// int main(){
//     int key=3,i,c=0;
//     int arr[]={1,3,5,7,6,8};int p=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     //pos=linearSearch(arr,n,key);
//      for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             c++;
//             p=i;
        
//             break;
//         }
//      }
   
//     if(c==0){
//         printf("Element is not found at index ");
//     }else{
//      printf("\n %d is found at %d location",key,p); 
//     }
// }  


// int main(){
//     int key=3,i,c=0;
//     int arr[]={1,3,5,7,6,8};int p=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     //pos=linearSearch(arr,n,key);
//      for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             c++;
//             p=i;
        
//             break;
//         }
//      }
   
//     if(c==0){
//         printf("Element is not found at index ");
//     }else{
//      printf("\n %d is found at %d location",key,p); 
//     }
// }  

#include<stdio.h>
#include<string.h>
int main(){
    char a[27];int t,len,c;
    printf("enter any string");
    scanf("%s",&a);
    printf("\nenter char to search");
    scanf("%c",&t);
     //printf("\n given char is=%c\n",t);
     len=strlen(a);
     for(int i=0;i<len;i++){
        if(t==a[i]){
            c++;
            printf("\n %c is found at %d location",t,i);
        }
    }
    if(c==0)
    printf("\n the element founc %c is not found in the list",t);
}
