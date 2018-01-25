import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
    	int n;
    	BigInteger a[] = new BigInteger[805];
        Scanner sc = new Scanner(System.in);
    	a[1] = BigInteger.ZERO ;
    	a[2] = BigInteger.ONE;
    	for(int i=3; i<805; i++){
    		a[i] = BigInteger.valueOf(i-1).multiply(a[i-2].add(a[i-1]));
    	}
        while(sc.hasNext()){
        	n = sc.nextInt();
        	if(n<0)break;
        	System.out.println(a[n]);
        }
    }
}
