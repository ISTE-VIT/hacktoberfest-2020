//Program for Josephus Problem 

import java.io.*;

public class JosephusProblem {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
		String s = read.readLine();
		String[] str = s.split(" ");
		int n = Integer.parseInt(str[0]);
		int k = Integer.parseInt(str[1]);
        
        System.out.println((new Josephus().kill(n,k)));
	}

}
class Josephus
{
    public static int kill(int n, int k)
    {
    	if(n==1) {
    		return 1;
    	}
    	return (kill(n-1,k)+k-1)%n+1;
    }
}
