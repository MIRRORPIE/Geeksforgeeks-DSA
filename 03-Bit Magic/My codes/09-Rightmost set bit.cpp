#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
    while(t--)
	{
	    cin >> n;
	    if(n == 0)
	    {
	        cout << 0 << endl;
	        continue;
	    }
	    n = n ^ (n&(n-1));
	    n = log2(n);
	    cout << n+1 << endl;

	}
	return 0;
}
