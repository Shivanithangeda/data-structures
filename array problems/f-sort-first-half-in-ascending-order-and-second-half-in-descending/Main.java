/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
class Main{
    public static void demo(int arr[],int n){
        int min=arr[0],i=0,j=0;
        for(i=0;i<n;i++){
            for(j=0;j<n/2;j++)
            if(arr[j]>arr[j+1]){
                int temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
            
        for(j=n/2;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
         }
        }
        for(i=0;i<n;i++){
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
        //System.out.println("sum of elements in array"+c);
    }
}
