package main

func mergeSort(arr []int) []int {
	//	Merge sort: Recursively divides the array, comparing subarrays and rebuilding a sorted array.
	//	Time Complexity: Best - O(n log(n)) Average - O(n log(n)) Worst - O(n log(n))

	//	If the array is less than 2 items long, there is no reason to sort
	if len(arr) < 2 {
		return arr
	}

	//	Create the first subarray using the first half of the array to be sorted
	firstArr := mergeSort(arr[:len(arr)/2])

	//	Create the second subarray using the remaining half of the array to be sorted
	secondArr := mergeSort(arr[len(arr)/2:])

	//	Call the merge function to sort and combine these subarrays
	return merge(firstArr, secondArr)
}

//  Function for merging two arrays into a singular array
func merge(arrA []int, arrB []int) []int {

	//	Declare an array to store merged version
	var mergedArr []int

	//	Initialise counters i and j as 0
	i, j := 0, 0

	//	As while loops are not implemented in Go, we use a for loop to iterate through subarrays
	for i < len(arrA) && j < len(arrB) {
		//	If the value within subarray A is less than that of subarray B
		if arrA[i] < arrB[j] {
			//	Append the value at index i from subarray A to the merged array
			mergedArr = append(mergedArr, arrA[i])
			//	Increment the counter i (this will step through subarray A)
			i++
			//	Else (the values are equal or that of A is larger than that of B
		} else {
			//	Append the value at index i from subarray B to the merged array
			mergedArr = append(mergedArr, arrB[j])
			//	Increment the counter j (this will step through subarray B)
			j++
		}
	}

	//	Both loops will utilise the value that the iterator has become from the previous for loop
	for ; i < len(arrA); i++ {
		mergedArr = append(mergedArr, arrA[i])
	}

	for ; j < len(arrB); j++ {
		mergedArr = append(mergedArr, arrB[j])
	}

	//	Return the sorted array
	return mergedArr
}
