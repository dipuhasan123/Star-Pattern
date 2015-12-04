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

==============
Sample Input
34
201
2098765413
1717171717171717171717171717171717171717171717171718
0
Sample Output
1 
0 
1
0
