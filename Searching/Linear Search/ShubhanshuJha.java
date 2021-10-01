import java.util.Scanner;

class LinearSearch {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter the size of the array: ");
		int n = scanner.nextInt();

		int[] arr = new int[n];
		System.out.println("Enter the elements of the array:");
		for (int i = 0; i < n; i++)
			arr[i] = scanner.nextInt();

		System.out.print("Enter the key: ");
		int key = scanner.nextInt();
		System.out.println("\nIs " + key + " present in the array? " + (linearSearch(arr, n, key) ? "Yes" : "No"));
	}
	static boolean linearSearch(int[] arr, int n, int key) {
		for (int i = 0; i < n; i++)
			if (arr[i] == key)
				return true;
		return false;
	}
}
