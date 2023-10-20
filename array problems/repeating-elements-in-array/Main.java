/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
import java.util.Arrays;

class Main
{
static void countFreq(int arr[], int n)
{
Map<Integer, Integer> mp = new HashMap<>();


for (int i = 0; i < n; i++)
{
if (mp.containsKey(arr[i]))
{
mp.put(arr[i], mp.get(arr[i]) + 1);
}
else
{
mp.put(arr[i], 1);
}
}

for (Map.Entry<Integer, Integer> entry : mp.entrySet())
{ if(entry.getValue()>1)
System.out.print(entry.getKey()+" ");
}

}

public static void main(String []args)
{
int arr[] = new int[]{10, 30, 50, 20, 10, 20, 30, 10};
int n = arr.length;
countFreq(arr, n);
}
}

