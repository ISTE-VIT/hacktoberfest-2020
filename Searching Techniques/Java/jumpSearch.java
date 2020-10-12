// Java program to implement Jump Search.
import java.util.*;
import java.lang.*;
import java.io.*;

public class JumpSearch 
{ 
    public static int jumpSearch(int[] arr, int x) 
    { 
        int n = arr.length; 
        int step = (int)Math.floor(Math.sqrt(n)); 
        int prev = 0; 
        while (arr[Math.min(step, n)-1] < x) 
        { 
            prev = step; 
            step += (int)Math.floor(Math.sqrt(n)); 
            if (prev >= n) 
                return -1; 
        }  
        while (arr[prev] < x) 
        { 
            prev++;  
            if (prev == Math.min(step, n)) 
                return -1; 
        } 
        if (arr[prev] == x) 
            return prev; 
  
        return -1; 
    } 
    public static void main(String [ ] args)throws java.lang.Exception 
    { 
    	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		  int n=Integer.parseInt(br.readLine());
      int arr[]=new int[n];
      for(int i=0;i<n;i++)
      {
          arr[i]=Integer.parseInt(br.readLine());
        }
        int x =Integer.parseInt(br.readLine());
        int index = jumpSearch(arr, x); 
        System.out.println("\nNumber " + x + 
                            " is at index " + index); 
    } 
} 
