using System;

class Program
{
    public static int LinearSearch(int[] elements, int x)
    {
        var n = elements.Length;

        for (int i = 0; i < n; i++)
        {
            // if the element is found, we return the position/index
            if (elements[i] == x)
            {
                return i;
            }
        }

        // if the element is not found, we return -1
        return -1;
    }

    public static void Main()
    {
        int[] elements = { 10, 2, 5, 38, 100, 28 };
        var x = 10;
        var position = LinearSearch(elements, x);

        if (position == -1)
        {
            Console.WriteLine("Element was not found in the specified array");
        }
        else
        {
            Console.WriteLine($"Element found at position {position}");
        }
    }
}