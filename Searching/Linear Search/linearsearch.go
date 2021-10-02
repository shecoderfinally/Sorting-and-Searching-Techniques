package main

func linearSearch(arr []int, searchFor int) int {
	//  Linear search: Iterates through an array until the value is found or the array is fully traversed.
	//  Time Complexity: Best - O(1) Average - O(n) Worst - O(n)
	//  NOTE: Best case is when the value is in the first index.

	//  Iterate over array, comparing value at current index to value searched for
	for i := 0; i < len(arr); i++ {
		//  Return the index if the value is found
		if arr[i] == searchFor {
			return i
		}
	}
	//  Return -1 if the value is not found and the array is fully traversed
	return -1
}