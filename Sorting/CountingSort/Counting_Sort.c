 #include <stdio.h>

void counting_Sort(int array[], int size) {
  int B[15];

  // Finding the largest element in the array
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }
  //Initializing a count array with all zeroes
  int count[10];
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // counting the number of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--) {
    B[count[array[i]] - 1] = array[i];
     count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = B[i];
  }
}

void print_Array(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
    int n,array[15],k=0;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&array[i]);
  }


  counting_Sort(array, n);
  print_Array(array, n);
}
