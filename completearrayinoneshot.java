import java.util.Scanner;

public class completearrayinoneshot {
      public static int add(int a, int b){
        int sum = a+b;
        return sum;
      }
public static int freq(int a, int b);{
      int count = 0;
      while(a>0)
      {
        int rem = a%10;
        if(rem==b){
           count++;}
           a=a/10; 
     }   
      return count;
}      
    public static void main(String args[]) {
     Scanner sc = new Scanner(System.in);
     
     int a = sc.nextInt;
     int b = sc.nextInt;
     int freq= freq(a,b);
     System.out.println(freq);
     //int sum = add(a,b);
     //System.out.println(sum);

    }
}