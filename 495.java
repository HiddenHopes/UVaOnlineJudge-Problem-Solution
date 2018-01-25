import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        BigInteger fib[] = new BigInteger[5002];
        fib[0] = BigInteger.valueOf(0);
        fib[1] = BigInteger.valueOf(1);

        for(int n=2; n <= 5000;n++) {
            fib[n] = fib[n-1].add(fib[n-2]);
        }

        while(sc.hasNext()) {
            int n = sc.nextInt();
            System.out.println("The Fibonacci number for "+n+" is "+fib[n]);
        }
    }
}
