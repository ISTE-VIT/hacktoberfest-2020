

import java.io.*;
import java.util.*;

class LinearSearch {
    public static int search(int arr[], int term)
    {
        for(int i=0;i<arr.length;i++)
            if(arr[i]==term)
                return i;
        return -1;
    }
	public static void main (String[] args) {
	    LinearSearch obj=new LinearSearch();
	    Scanner scr=new Scanner(System.in);
	    System.out.println("Enter number of elements");
	    int n=scr.nextInt();
	    int arr[]=new int[n];
	    System.out.println("Enter elements:");
	    for(int i=0;i<n;i++)
	        arr[i]=scr.nextInt();
	    System.out.println("Enter element to be searched for");
	    int term=scr.nextInt();
	    int found=obj.search(arr,term);
	    if(found==-1)
	        System.out.println("Term "+term+" not found");
	    else
	        System.out.println("Term "+term+" present at index = "+found);
		
	}
}