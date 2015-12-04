import java.util.*;
import java.math.BigInteger;
import java.util.Scanner;

public class divisible {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		BigInteger a, b, d;
		int t;
		t = sc.nextInt();
		int c = 1;
		while(t--!=0)
		{
			a = new BigInteger(sc.next());
			b = new BigInteger(sc.next());
			a = a.abs();
			b = b.abs();
			
			if(a.mod(b).equals(BigInteger.ZERO))
			{
				System.out.println("Case "+ c++ +": divisible");
			}
			else
			{
				System.out.println("Case "+ c++ +": not divisible");
			}
		}
	}
}

====================
Sample Input:
6
101 101
0 67
-101 101
7678123668327637674887634 101
11010000000000000000 256
-202202202202000202202202 -101

Sample Output:
Case 1: divisible
Case 2: divisible
Case 3: divisible
Case 4: not divisible
Case 5: divisible
Case 6: divisible


