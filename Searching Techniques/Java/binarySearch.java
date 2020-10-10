

import java.io.*;
import java.util.*;

class BinarySearch {
    public static int search(int arr[], int term)
    {
        int l=0,r=arr.length-1,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(arr[mid]==term)
                return mid;
            else if(term>arr[mid])
                l=mid+1;
                else
                r=mid-1;
        }
        return -1;
    }
	public static void main (String[] args) {
	    BinarySearch obj=new BinarySearch();
	    Scanner scr=new Scanner(System.in);
	    System.out.println("Enter number of elements");
	    int n=scr.nextInt();
	    int arr[]=new int[n];
	    System.out.println("Enter elements:");
	    for(int i=0;i<n;i++)
	        arr[i]=scr.nextInt();
	    System.out.println("Enter element to be searched for");
	    int term=scr.nextInt();
	    Arrays.sort(arr);
	    int found=obj.search(arr,term);
	    if(found==-1)
	        System.out.println("Term "+term+" not found");
	    else
	        System.out.println("Term "+term+" present");
		
	}
}