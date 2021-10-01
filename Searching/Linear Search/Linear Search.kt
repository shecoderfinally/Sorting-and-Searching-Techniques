fun linearSearch(list:List<Any>, key:Any):Int?{
	for ((index, value) in list.withIndex()) {
		if (value == key){
			return index
		}
	}
	return null
}
fun main(args: Array<String>) {
    println("
Ordered list:")
    val someList = listOf(9, 7, "Adam", "Clark", "John", "Tim", "Zack", 6)
    println(someList)
    val name = 7
    val position = linearSearch(someList, name)
    println("${name} is in the position ${position} in the ordered List.
")

    val name2 = "Tim"
    val position2 = linearSearch(someList, name2)
    println("${name2} is in the position ${position2} in the ordered List.
")
}
