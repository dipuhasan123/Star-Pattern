import java.util.*;
import java.math.BigInteger;
import java.util.Scanner;

public class bigNumber {
   public static void main(String args[])
	{
	   BigInteger f; 
	   int t, c, i, n;
	   Scanner sc = new Scanner(System.in);
	   t = sc.nextInt();
	   while(t--!=0)
	   {
		   n = sc.nextInt();
		   //n = new BigInteger(sc.next());
		   f = BigInteger.ONE;
		   //for(BigInteger i = BigInteger.valueOf(1); i.compareTo(n) <= 0;  i = i.add(BigInteger.ONE))
		   for(i = 1; i<=n; i++)
		   {
			   f = f.multiply(BigInteger.valueOf(i));
		   }
		   
		   System.out.println(f);
		    c = 0;
		   while(!f.equals(BigInteger.ZERO))
		   {
			   f=f.divide(BigInteger.TEN);
			   c++;
		   }
		   System.out.println(c);
	   }
	}
 }

Input     Output
3
5         3
10        7
20        19

