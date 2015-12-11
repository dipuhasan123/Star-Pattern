import java.math.BigInteger;
import java.util.*;

public class easy {
	public static void main(String args[])
	{
		int i, n;
		Scanner sc = new Scanner(System.in);
		
		BigInteger res, ans, A, sum;
		ans = BigInteger.ZERO;
		sum = new BigInteger("0");
		
		while(sc.hasNext())
		{
			n = sc.nextInt();
			//a = sc.nextInt();
			A = new BigInteger(sc.next());
			//A = BigInteger.valueOf(a);
			sum = new BigInteger("0");
			for(i = 1; i<=n; i++)
			{
			  res = BigInteger.valueOf(i).multiply(A.pow(i));
				//ans = ans.add(BigInteger.valueOf(i).multiply(A.pow(i)));
			  sum = sum.add(res);
			}
			System.out.println(sum);
		}
		
	}
}

=====
Input     Output
3 3       102
4 4       1252
10 10     109876543210


