// Java program to generate power set in
// lexicographic order.
import java.util.*;

class Main {

	// str : Stores input string
	// n : Length of str.
	// curr : Stores current permutation
	// index : Index in current permutation, curr
	static void permuteRec(String str, int n,
						int index, String curr)
	{
		// base case
		if (index == n) {
			return;
		}
		System.out.println(curr);
		for (int i = index + 1; i < n; i++) {

			curr += str.charAt(i);
			permuteRec(str, n, i, curr);

			// backtracking
			curr = curr.substring(0, curr.length() - 1);
		}
		return;
	}

	// Generates power set in lexicographic
	// order.
	static void powerSet(String str)
	{
		char[] arr = str.toCharArray();
		Arrays.sort(arr);
		permuteRec(new String(arr), str.length(), -1, "");
	}

	// Driver code
	public static void main(String[] args)
	{
		String str = "cab";
		powerSet(str);
	}
}
