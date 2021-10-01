def selectSort(arr):
  num_of_elem = len(arr)
  for i in range(num_of_elem):
    # We are assuming that the first element of the unsorted part as the minimum.
    mini = i
    for j in range(i+1, num_of_elem):
      if (arr[j] < arr[mini]):
        # Updating the position of minimum element if a smaller element is found in the array.
        mini = j
    # Swapping the minimum element with the first element of the unsorted part.
    arr[i], arr[mini] = arr[mini], arr[i]
  return arr

# Driver code to test the selectSort Function 
array = [5, 7, 8, 6, 2, 1]
# Printing the Sorted Array here
print(selectSort(array))
