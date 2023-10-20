/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Arrays;
class SmallestAndLargestNumber

{
    public static void main(String[] args)
    {
        int numbers[]={14,17,18,19,10};
        int largest=numbers[0];
        int smallest=numbers[0];
        for(int i=0;i<numbers.length;i++)
        {
            if(numbers[i]>largest)
            {
                largest= numbers[i];
            }
            else if(numbers[i]<smallest)
            {
                smallest =numbers[i];
            }
        }
        System.out.println("\n given array is:"+ Arrays.toString(numbers));
        System.out.println("largest number is::"+largest);
        System.out.println("smallest number is::"+smallest);
    }
}

