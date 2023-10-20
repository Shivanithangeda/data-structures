/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
class Main{
    
    public static void demo(int arr[],int n){
       
        HashMap<Integer,Integer> m= new LinkedHashMap<>();
       
        int count;
        for(int i=0;i<n;i++){
            count=1;
            for(int j=0;j<n;j++){
                if(arr[i]>arr[j])
                    count++;
            }
            m.put(arr[i],count);
        }
        System.out.println(m.values());
        
    }
    public static void main(String args[]){
       int arr[]= new int[]{10, 8, 15, 12, 6, 20, 1};
       int n=arr.length;
       demo(arr,n);
    }
}
