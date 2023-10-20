/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
class Main{
    
    public static void demo(int arr[],int n){
        HashSet<Integer> m= new HashSet<>();
        for(int i=0;i<n;i++){
            m.add(arr[i]);
        }
        System.out.println(m);
            
    }
    public static void main(String args[]){
       int arr[]= new int[]{10,20,10,30,20,40};
       int n=arr.length;
       demo(arr,n);
    }
}