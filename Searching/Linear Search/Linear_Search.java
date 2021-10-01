// Java program for linear search

import java.io.*;

class Linear_Search
{

	public static void search(int arr[], int search_Element)
	{
		int left = 0;
		int length = arr.length;
		int right = length - 1;
		int position = -1;

		for (left = 0; left <= right;)
		{
			
			if (arr[left] == search_Element)
			{
				position = left;
				System.out.println(
					"Element found in Array at "
					+ (position + 1) + " Position with "
					+ (left + 1) + " Attempt");
				break;
			}
		
			if (arr[right] == search_Element)
			{
				position = right;
				System.out.println(
					"Element found in Array at "
					+ (position + 1) + " Position with "
					+ (length - right) + " Attempt");
				break;
			}
			
			left++;
			right--;
		}

		if (position == -1)
			System.out.println("Not found in Array with "
							+ left + " Attempt");
	}

	public static void main(String[] args)
	{
		int arr[] = { 10, 554, 453, 64, 95 };
		int search_element = 64;
		search(arr,search_element);
	}
}
