/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;

class Main{
    public static  void demo(int arr[],int n){
       int count=arr[0];
       int temp[]=new int[n];
       
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j]>arr[i]){
        //             temp[i]=count++;
        //             break;
        //         }
        //         else{
        //             temp[i]=1;
        //             break;
        //         }
        //     }
        //     System.out.print(temp[i]+" ");
        // }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter size of array:");
        int size=sc.nextInt();
        System.out.println("enter elements of array:");
        int arr[]=new int[size];
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }
        demo(arr,size);
        //System.out.println("sum of elements in array"+c);
    }
}

