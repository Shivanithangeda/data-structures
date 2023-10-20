/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
class Main{
    public static void demo(int arr[],int n){
        for(int i=n-1;i>=0;i--){
          System.out.print(arr[i]+" ");    
        }
        
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
       // System.out.println("sum of elements in array"+c);
       
    }
}

