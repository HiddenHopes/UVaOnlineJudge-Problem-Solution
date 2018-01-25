import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
    	BigInteger a ;
    	BigInteger b ;
    	BigInteger ans;
    	char c;

        while(sc.hasNext()){
        	a = sc.nextBigInteger();
        	c = sc.next().charAt(0);
        	b = sc.nextBigInteger();
        	if(c=='%') ans = a.mod(b);
            else ans = a.divide(b);

        	System.out.println(ans);
        }
    }
}
