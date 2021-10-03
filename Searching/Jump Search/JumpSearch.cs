using System;

public class Program
{
    public static int JumpSearch(int[] elements, int x)
    {
        // array lentgh
        int length = elements.Length;

        // finding the jump step
        int step = (int)Math.Floor(Math.Sqrt(length));
        int prev = 0;

        while (elements[Math.Min(step, length) - 1] < x)
        {
            prev = step;
            step += (int)Math.Floor(Math.Sqrt(length));

            if (prev >= length)
            {
                return -1;
            }
        }

        while (elements[prev] < x)
        {
            prev++;

            if (prev == Math.Min(step, length))
            {
                return -1;
            }
        }

        // if element is found
        if (elements[prev] == x)
        {
            return prev;
        }

        return -1;
    }

    public static void Main()
    {
        // sorted array
        int[] elements = { 5, 12, 22, 41, 55, 57, 60, 74, 91 };
        int x = 22;
        int position = JumpSearch(elements, x);

        if (position == -1)
        {
            Console.Write($"Number {x} not found in the array");
        }
        else
        {
            Console.Write($"Number {x} is at position/index: {position}");
        }
    }
}
