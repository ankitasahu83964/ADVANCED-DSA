public class GCDRecursion {

    static int gcd(int a, int b) {

        // Base case
        if (b == 0)
            return a;

        // Recursive call
        return gcd(b, a % b);
    }

    public static void main(String[] args) {

        int a = 48;
        int b = 18;

        int result = gcd(a, b);

        System.out.println("GCD = " + result);
    }
}
