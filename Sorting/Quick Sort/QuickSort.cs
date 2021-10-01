// C# program to illustrate
// Randomised Quick sort
using System;
class RandomizedQsort
{	

/* This function takes last element as pivot,
	places the pivot element at its correct
	position in sorted array, and places all
	smaller (smaller than pivot) to left of
	pivot and all greater elements to right
	of pivot */
static int partition(int[] arr, int low, int high)
{

	// pivot is chosen randomly
	random(arr, low, high);
	int pivot = arr[high];

	int i = (low-1); // index of smaller element
	for (int j = low; j < high; j++)
	{

	// If current element is smaller than or
	// equal to pivot
	if (arr[j] < pivot)
	{
		i++;

		// swap arr[i] and arr[j]
		int tempp = arr[i];
		arr[i] = arr[j];
		arr[j] = tempp;
	}
	}

	// swap arr[i+1] and arr[high] (or pivot)
	int tempp2 = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tempp2;

	return i + 1;
}

// This Function helps in calculating
// random numbers between low(inclusive)
// and high(inclusive)
static int random(int[] arr, int low, int high)
{

	Random rand = new Random();
	int pivot = rand.Next() % (high - low) + low;

	int tempp1 = arr[pivot];
	arr[pivot] = arr[high];
	arr[high] = tempp1;

	return partition(arr, low, high);
}

/* The main function that implements Quicksort()
	arr[] --> Array to be sorted,
	low --> Starting index,
	high --> Ending index */
static void sort(int[] arr, int low, int high)
{
	if (low < high)
	{
	/* pi is partitioning index, arr[pi] is
			now at right place */
	int pi = partition(arr, low, high);

	// Recursively sort elements before
	// partition and after partition
	sort(arr, low, pi - 1);
	sort(arr, pi + 1, high);
	}
}

/* A utility function to print array of size n */
static void printArray(int[] arr)
{
	int n = arr.Length;
	for (int i = 0; i < n; ++i)
	Console.Write(arr[i] + " ");
	Console.WriteLine();
}

// Driver Code
static public void Main ()
{
	int[] arr = {10, 7, 8, 9, 1, 5};
	int n = arr.Length;

	sort(arr, 0, n-1);

	Console.WriteLine("sorted array");
	printArray(arr);
}
}

// This code is contributed by shubhamsingh10
