fun main(args: Array<String>) {
  var myArray = mutableListOf(7,1,9,3,22,6)
  val result = bubbleSort(myArray)
  println(result)
}

fun bubbleSort(array: MutableList<Int>): List<Int> {
  if (array.size == 0) return array
  var isSorted = false
  var counter = 0
  while (!isSorted) {
    isSorted = true
    for (i in 0 until array.size - 1 - counter) {
      if(array[i] > array[i+1]) {
        isSorted = false
        swap(array, i, i + 1)
      }
    }
    counter++
  }
  return array
}

fun swap(array: MutableList<Int>, i: Int, j: Int) {
  val temp = array[j]
  array[j] = array[i]
  array[i] = temp
}