/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
import java.util.Arrays;
public class Main
{
    public static void demo(int arr[],int n){
        Map<Integer,Integer> m=new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++){
             if(m.containsKey(arr[i]))
             {
                   m.put(arr[i],m.get(arr[i]+1));
             }
        else {
            m.put(arr[i],1);}
             }
        }
       for(Map.Entry<Integer,Integer> entry:m.entrySet())
       {
            if(entry.getValue()>1)
            {
            System.out.println(entry.getKey()+" ");
                
            }
        }
    }
	public static void main(String[] args) {
	    int arr[]=new int[]{1,2,3,1,3,4,5,1};
	    int n=arr.length;
	    demo(arr,n);
	}
}

