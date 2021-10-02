'''
Problem Statement: Given two sequences, find the length of longest subsequence present in both of them. 
Subsequence: subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. 
For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”. 

Examples: 
        LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3. 
        LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4. 

Below is the Python implementation for the same using recursion
'''
# A Naive recursive Python implementation of LCS problem

def lcs(X, Y, m, n):

	if m == 0 or n == 0:
	return 0;
	elif X[m-1] == Y[n-1]:
	return 1 + lcs(X, Y, m-1, n-1);
	else:
	return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));


# Driver program 
X = "AGGTAB"
Y = "GXTXAYB"
print "Length of LCS is ", lcs(X , Y, len(X), len(Y))

#[VIBHUTI SINGH](https://github.com/VibhuRajput)
