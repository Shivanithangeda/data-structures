/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//wite a program to print largest element in array
// public class Main
// {
// 	public static void main(String[] args) {
// 	  int arr[]={12,15,6,45};
// 	  int max=arr[0];
// 	  for(int i=0;i<arr.length;i++){
// 	      if(max<arr[i]){
// 	          max=arr[i];
// 	      }
// 	  }
// 	  System.out.println(max);
	  
// 	}
// }


//wite a program to print smallest element in array
// public class Main
// {
// 	public static void main(String[] args) {
// 	  int arr[]={12,15,6,45};
// 	  int min=arr[0];
// 	  for(int i=0;i<arr.length;i++){
// 	      if(min>arr[i]){
// 	          min=arr[i];
// 	      }
// 	  }
// 	  System.out.println(min);
	  
// 	}
// }

//write a program for second largest and second smallest elemnt in array
// public class Main
// {
//     static int secSmallest(int arr[],int n){
//         int small=arr[0];
//         for(int i=0;i<n;i++){
//             if(small>arr[i]){
//                 small=arr[i];
//             }
//         }
//         int secsmall=Integer.MAX_VALUE;
        
//         for(int i=0;i<n;i++){
//             if(arr[i]!=small&&arr[i]<secsmall){
//                 secsmall=arr[i];
//             }
//         }
//         return secsmall;
        
//     }
    
//     static int secLargest(int arr[],int n){
//         int large=arr[0];
//         for(int i=0;i<n;i++){
//             if(large<arr[i]){
//                 large=arr[i];
//             }
//         }
//         int seclarge=Integer.MIN_VALUE;
//         for(int i=0;i<n;i++){
//             if(arr[i]!=large&&arr[i]>seclarge){
//                 seclarge=arr[i];
//             }
//         }
//         return seclarge;
        
//     }
// 	public static void main(String[] args) {
// 	  int arr[]={8,4,7,3,1};
// 	  int n=arr.length;
// 	  System.out.println("second smallest element is:"+secSmallest(arr,n));
// 	  System.out.println("second largest element is:"+secLargest(arr,n));
	  
	  
// 	}
// }

// import java.util.*;
// public class Main{
//     static int secLargest(int arr[],int n){
//     Arrays.sort(arr);
//     return arr[n-2];
//   }
// static int secSmallest(int arr[],int n){
//     Collections.reverse(Arrays.asList(arr));
//     return arr[n-2];
//   }
  
//   public static void main(String args[]){
//       int arr[]={8,4,7,3,1};
// 	   int n=arr.length;
// 	  System.out.println("second smallest element is:"+secSmallest(arr,n));
// 	  System.out.println("second largest element is:"+secLargest(arr,n));
	  
	  
//   }
    
// }


//write a program to fins sum of elements in Arrays
// import java.util.*;
// class Main{
//   public static void main(String args[]){
//       int arr[]={8,4,7,3,1};
//       int sum=0;
// 	  for(int i=0;i<arr.length;i++){
// 	     sum +=arr[i]; 
// 	  }
// 	  System.out.println(sum);
//   }
    
// }



//write a program to reverse an Arrays
//method1
// import java.util.*;
// class Main{
//   public static void main(String args[]){
// 	 int arr[]={8,4,3,7,1};
// 	 int n=arr.length;
// 	 for(int i=n-1;i>=0;i--){
// 	     System.out.print(arr[i]+" ");
// 	 }
//   }
    
// }

//method2
// import java.util.*;
// class Main{
//   public static void main(String args[]){
// 	 int arr[]={8,4,3,7,1};
// 	 int n=arr.length;
// 	 int start=1,end=n-1;
// 	 for(int i=0;i<=n;i++){
// 	     int temp=arr[start];
// 	     arr[start]=arr[end];
// 	     arr[end]=temp;
// 	 }
// 	 for(int i=0;i<n;i++){
// 	     System.out.print(arr[i]+" ");
// 	 }
//   }
    
// }

//method3
// import java.util.*;
// class Main{
    
//     static void recReverse(int arr[],int start,int end){
//         if(start>=end){
//           return;
//         }
//         int temp=arr[start];
// 	     arr[start]=arr[end];
// 	     arr[end]=temp;
	     
// 	     recReverse(arr,start+1,end-1);
//     }
//   public static void main(String args[]){
// 	 int arr[]={8,4,3,7,1};
// 	 int n=arr.length;
// 	 int start=0,end=n-1;
// 	 1
	
// 	recReverse(arr,start,end);
// 	 for(int i=0;i<n;i++){
// 	     System.out.print(arr[i]+" ");
// 	 }
//   }
    
// }

// import java.util.Arrays;
// import java.util.Scanner;
// class Main{
//     static void print(int arr[],int n){
//         int temp;
//          for(int i=0;i<n-1;i++){
//             for(int j=0;j<n/2;j++){
//                 if(arr[j]>arr[j+1]){
//                     temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//                 }
//             }
         
         
        
//             for(int j=n/2;j<n-1;j++){
//                 if(arr[j]<arr[j+1]){
//                     temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//                 }
//             }
//     }
//          for(int i=0;i<n;i++){
//              System.out.print(arr[i]+" ");
//          }
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         int[] arr=new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }
//          n=arr.length;
//         print(arr,n);
        
        
//         //secondHalf(arr,mid,end);
        
//     }
// }


//write a program to sort array elementspublic static void main(String[] args){

import java.util.Scanner;
class Main{
static void print(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int temp;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        System.out.print(arr[i]+" ");
    }
}

    public static void main(String args[]){
         Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        n=arr.length;
        print(arr,n);
        
    }
}
       













