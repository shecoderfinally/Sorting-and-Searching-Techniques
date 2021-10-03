using System;

// The first x numbers from the Fibonacci Series - Recursive

class Program
{
    public static int FibonacciSeries(int n)
    {
        // The first number from Fibonacci series
        if (n == 0) return 0;
        // The second number from Fibonacci series
        if (n == 1) return 1; 

        return FibonacciSeries(n - 1) + FibonacciSeries(n - 2);
    }
    public static void Main(string[] args)
    {
        Console.Write("Enter the length of the series: ");

        int length = -1;
        int.TryParse(Console.ReadLine(), out length);

        if (length > 0)
        {
            for (int i = 0; i < length; i++)
            {
                Console.Write($"{FibonacciSeries(i)} ");
            }
        }
        else
        {
            Console.WriteLine($"You entered a wrong input: {length}");
        }
    }
}