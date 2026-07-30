public import java.util.Scanner;
public class Bitwise1 {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        int n=21;
        int mask=(1<<2);
        int mask_on=(1<<3);
        int toggle_mask=(1<<1);
        int n1=33;
        if(n1>0 && (n1&(n1-1)) = 0){
            System.out.println(n1+" is power of 2")
        }
        else
            
        System.out.println("Without operation Binary no "+Integer.toBinaryString(n));
        System.out.println("3rd bit off "+Integer.toBinaryString((n & mask)));
        System.out.println("4th bit off "+Integer.toBinaryString((n|mask_on)));
        System.out.println("2nd bit off "+Integer.toBinaryString((n^toggle_mask )));
    }
    
}
