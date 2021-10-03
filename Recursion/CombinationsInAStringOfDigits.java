// Java program to find all combinations
// of numbers from a given string of digits
class Main {
	
// function to print combinations of numbers
// in given input string
static void printCombinations(char[] input,
							int index,
							char[] output,
							int outLength)
{
	// no more digits left in input string
	if (input.length == index)
	{
		// print output string & return
		System.out.println(String.valueOf(output));
		return;
	}
	
	// place current digit in input string
	output[outLength] = input[index];
	
	// separate next digit with a space
	output[outLength + 1] = ' ';
	
	printCombinations(input, index + 1, output,
								outLength + 2);
	
	// if next digit exists make a
	// call without including space
	if(input.length!=index + 1)
	printCombinations(input, index + 1, output,
								outLength + 1);
}

// Driver Code
public static void main(String[] args)
{
	char input[] = "1214".toCharArray();
	char []output = new char[100];
	
	printCombinations(input, 0, output, 0);
}
}
