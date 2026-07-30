import java.util.Arrays;
public class recursionfunction4 {
    static int fibo(int n, int[], dp){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        if(n%10==0){
            dp[n]=1+fibo(n/10,dp);
        }
        else{
            dp[n]=fibo(n/10,dp);
        }
        return dp[n];
    }
    public static void main(String[] args){
        int n=102030;
        int[] dp = new int[n +1];
        Arrays.fill(dp,-1);
        System.out.println(fibo(n,dp));
    }
}     

