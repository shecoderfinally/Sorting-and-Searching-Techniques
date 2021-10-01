# Partition Function
# Takes in an array and the left and right index
# Returns the position of the pivot
def partition(arr,l,r):

    # Pivot is the last element of the list
    pivot = arr[r]
    # i is the index of the first element of the list
    i = l-1

    # Looping through the list
    for j in range(l,r):
        # If the current element is less than the pivot
        # Then swap the current element with the element at index i
        if arr[j] <= pivot:
            i = i + 1
            arr[i],arr[j] = arr[j],arr[i]
    # Swap the pivot with the element at index i+1
    arr[i+1],arr[r] = arr[r],arr[i+1]
    return i+1

# Quicksort Function
# Takes in an array and the left and right index
# Returns the sorted array
def quicksort(arr,l,r):

    # Base case : if the left index is greater than the right index, then return
    if l >= r:
        return

    # Calling the partition function to get the position of the pivot
    p = partition(arr,l,r)

    # Recursively calling quicksort function on the list before the pivot
    quicksort(arr,l,p-1)
    # Recursively calling quicksort function on the list after the pivot
    quicksort(arr,p+1,r)


# Driver Code
lst = [2,4,1,8,5,7,6,3]
quicksort(lst,0,len(lst)-1)
print(lst)

# Code contributed by Sayan Maiti