/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
// 		//int arr[]={10,20,30,40};
// 		Scanner sc=new Scanner(System.in);
// 		int arr;
// 		ArrayList<Integer> a=new ArrayList<>();
// 		for(int i=0;i<5;i++){
// 		    arr=sc.nextInt();
// 		    a.add(arr);
// 		}
// 		System.out.println(a);

int[] array = new int[]{1, 2, 3, 4, 5, 6};
StringBuilder sb = new StringBuilder();
sb.append("{");
for (int i = 0; i < array.length; i++) {
    sb.append(array[i]);
    if (i < array.length - 1) {
      sb.append(", ");
    }
}
sb.append("}");
System.out.println(sb);
	}
}

