/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// import java.util.*;
// class Main{
//     static Integer arr[]={10,20,10,40,10,50,10,20,40,40};
//     public static void demo(List<Integer> l){
//         int n=arr.length;
//         final HashMap<Integer,Integer> mc=new HashMap<>();
//          final HashMap<Integer,Integer> mi=new HashMap<>();
//         for(int i=0;i<n;i++){
//             if(mc.containsKey(arr[i])){
//                 mc.put(arr[i],mc.get(arr[i])+1);
//             }
//             else{
//                 mc.put(arr[i],1);
//                 mi.put(arr[i],i);
//             }
//         }
//       Collections.sort(l, new Comparator<Integer>(){
//           public int compare(Integer n1,Integer n2){
//               int freq1=mc.get(n1);
//               int freq2=mc.get(n2);
//               if(freq1!=freq2)
//                   return freq2-freq1;
//               else
//                   return mi.get(n1)-mi.get(n2);
               
//           }
//       });
//       System.out.println(l);
       
//     }
//     public static void main(String[] args){
//       List<Integer> l=Arrays.asList(arr);
//       demo(l);
//     }
// }


import java.util.*;
class Main{
    
    public static List<Integer> demo(List<Integer> l){
        
        final HashMap<Integer,Integer> m=new HashMap<>();
         
        for(int i=0;i<l.size();i++){
           m.put(l.get(i),m.getOrDefault(l.get(i),0)+1);
        }
       Collections.sort(l, (n1,n2)->{
               int freq1=m.get(n1);
               int freq2=m.get(n2);
               if(freq1!=freq2)
                   return freq2-freq1;
               else
                   return l.indexOf(n1)-l.indexOf(n2);
               
       });
      return l;
       
    }
    public static void main(String[] args){
       Integer arr[]={10,20,10,40,10,50,10,20,40,40};
       List<Integer> l=Arrays.asList(arr);
       System.out.println(demo(l));
    }
}



