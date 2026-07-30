import java.util.Scanner;
public class SaddlePointEasy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] a = new int[n][n];

        // input
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        boolean found = false;

        for(int i = 0; i < n; i++) {

            int min = a[i][0];
            int colIndex = 0;

            // row ka minimum
            for(int j = 1; j < n; j++) {
                if(a[i][j] < min) {
                    min = a[i][j];
                    colIndex = j;
                }
            }

            // check column me maximum
            boolean saddle = true;
            for(int k = 0; k < n; k++) {
                if(a[k][colIndex] > min) {
                    saddle = false;
                    break;
                }
            }

            if(saddle) {
                System.out.println(min);
                found = true;
            }
        }

        if(!found) {
            System.out.println("No Saddle Point");
        }
    }
}

