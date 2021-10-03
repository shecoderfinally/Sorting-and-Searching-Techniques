'''
Fibonacchi Numbers: The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematics, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 

Fn = Fn-1 + Fn-2
with seed values 

F0 = 0 and F1 = 1.

Example:
Input  : n = 9
Output : 34

Usually it takes exponential time through recursion of liner time through Dynamic Programming
But in this algorithm, I will be using golden ratio number strategy and will 
reduce the operation cost to only 'O(logn), i.e, LOGARITHMIC TIME'
which was devised by R. Knott

Formula: Fn = {[(√5 + 1)/2] ^ n} / √5 
'''
# Python3 program to find n'th
# fibonacci Number
import math

def fibo(n):
	phi = (1 + math.sqrt(5)) / 2

	return round(pow(phi, n) / math.sqrt(5))
	
# Driver code
if __name__ == '__main__':
	
	n = 9
	
	print(fibo(n))
	
# This code is contributed by [VIBHUTI SINGH](https://github.com/VibhuRajput)
