import java.util.Scanner;
public class str1 {
        public static void main(String[] args) {
        String str1= "how are you";
        String rev = "";
        for(int i=0;i<=str1.length()-1; i--)
        {
         rev = rev + str1.charAt(i);
        }
        System.out.println(rev);
    }
}
