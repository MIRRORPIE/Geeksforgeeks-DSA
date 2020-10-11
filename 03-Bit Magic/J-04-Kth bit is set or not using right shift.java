// Java program to check if 
// k-th bit of a given number 
// is set or not using right 
// shift operator. 
import java.io.*; 

class GFG 
{ 
static void isKthBitSet(int n, 
						int k) 
{ 
	if (((n >> (k - 1)) & 
			1) == 1) 
		System.out.println("SET"); 
	else
		System.out.println("NOT SET"); 
} 

// Driver code 
public static void main (String[] args) 
{ 
	int n = 5, k = 1; 
	isKthBitSet(n, k); 
} 
} 

