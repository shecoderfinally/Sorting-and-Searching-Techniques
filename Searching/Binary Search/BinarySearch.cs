using System;

public class Program
{
    static int BinarySearch(int[] elements, int left, int right, int x)
    {
        if (right >= left)
        {
            int mid = left + (right - left) / 2;

            if (elements[mid] == x) // the element is in the middle of the array
                return mid;

            if (elements[mid] > x) // the element must be in the left subarray
            {
                return BinarySearch(elements, left, mid - 1, x);
            }

            return BinarySearch(elements, mid + 1, right, x); // the element must be in the right subarray
        }

        return -1; // if the element is not present in the array, we return -1
    }

    public static void Main()
    {
        int[] elements = { 0, 10, 50, 89, 100, 270 };
        int lentgh = elements.Length;
        int x = 20;
        int position = BinarySearch(elements, 0, lentgh - 1, x);

        if (position == -1)
        {
            Console.WriteLine($"Element {x} not found in array.");
        }
        else
        {
            Console.WriteLine($"Element {x} found at position: {position}");
        }
    }
}