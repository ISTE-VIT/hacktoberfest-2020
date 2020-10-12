// Finds an element x in a sorted array using Exponential search. 
import java.util.Arrays; 

public class ExponentialSearch
{ 
	
	//returns the first index at which the element x is present
	//if not present return -1
	static int exponentialSearch(int arr[], int n, int x) 
	{ 
		
		if (arr[0] == x) 
			return 0; 
	
		
		int i = 1; 
		while (i < n && arr[i] <= x) 
			i = i*2; 
	
		//applying binary search for the found range
		return Arrays.binarySearch(arr, i/2, 
								Math.min(i, n), x); 
	} 
	
	 
	public static void main(String args[]) 
	{ 
		int arr[] = {10, 20, 30, 45, 60, 67, 89,101}; 
		int x = 60; 
		int result = exponentialSearch(arr, arr.length, x); 
		
		if(result==-1){
		    System.out.println("Element is not present in the array");
		}
		else{
		    System.out.println("Element is present at index " + result); 
		}
		
		
	} 
} 
