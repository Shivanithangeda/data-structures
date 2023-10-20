/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Arrays;
public class Main
{
    static boolean demo(int n){
        int temp=n,rev=0;
        while(n!=0){
            int rem=n%10;
             rev=rev*10+rem;
            n=n/10;
        }
        if(temp==rev)
           return true;
        else
           return false;
    }    
    static int palindrome(int arr[],int n){
         Arrays.sort(arr);
	     for(int i=n-1;i>=0;i--){
	      if(demo(arr[i]))
	         return arr[i];
	         
	      
	  }
	  return -1;
    }
    
	public static void main(String[] args) {
	  int arr[]={1221,897,54545,9999990};
	  int n=arr.length;
	  System.out.println(palindrome(arr,n));
	 
	}
}
