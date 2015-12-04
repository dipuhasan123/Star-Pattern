import java.math.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Mod17 {
public static void main(String[] args) {
        BigInteger a, b, c;
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext())
        {
            a = new BigInteger(sc.next());
            
            if(a.equals(BigInteger.ZERO))
            {
            	break;
            }
            if(a.mod(new BigInteger("17")).equals(BigInteger.ZERO)){
            	System.out.println("1");
            }
            else{
            	System.out.println("0");
            }
        }
    }
}
