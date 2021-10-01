
// Java implementation of Linear Search

//Linear search can be used by many approaches example to check element in the array or it's index
//Here in this program we are returning boolean (true or false ) element present or not 

package main;
import java.util.ArrayList;
import java.util.Arrays;

public class LinearSearch {

	static boolean linearSearch(int[] nums,int key) {
		
//		checking if the array is empty
		if(nums.length==0) {
			return false;
		}
		
//		here traversing the array linearly to check whether our element is present in array
		for(int i=0;i<nums.length;i++) {
			if(nums[i]==key) {
				
				//if found return true
				return true;
			}
		}
		
		//after completing the array traversal if we don't get our key element then return false
		return false;
	}
	
	
//	program starts from here
	public static void main(String[] args) {
		
//		let's take a array of elements and a key element which has to be searched
		int[] nums = {12,1,4,85,197,25,97};
		int key=96;
		
//		we will be passing array and the key element through the function
		boolean ans=linearSearch(nums,key);
		
//		after searching through the array result we will return true if we get the key element in the array else false
        System.out.println(ans);
	}
	
}
