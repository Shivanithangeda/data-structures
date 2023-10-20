/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Largest element in array
import java.util.*;

class Main{
    
    public static int demo(int arr[],int n){
        int max=arr[0];
        for(int i=0;i<n;i++){
           if(arr[i]>max)
             max=arr[i];
        }
        return max;
    }
    public static int demo1(int arr[],int n){
        int min=arr[0];
        for(int i=0;i<n;i++){
           if(arr[i]<min)
             min=arr[i];
        }
        return min;
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
        int c=demo(arr,size);
        int d=demo1(arr,size);
        System.out.println("Largest element of array:"+c);
        System.out.println("Smallest element of array:"+d);
        
    }
}
