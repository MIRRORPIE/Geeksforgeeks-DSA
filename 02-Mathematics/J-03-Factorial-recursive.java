/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {

	
	static int fact(int n)
	{
	    if(n==0)
	        return 1;
		
		return n * fact(n-1);
	}

	public static void main (String[] args) {
		
		int number = 5;

		System.out.println(fact(number));

	}
}