#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, m, n;
	cin >> t;
    while(t--)
	{
	    cin >> m >> n;
	    n = m ^ n;
	    if(n == 0)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    n = n ^ (n&(n-1));    // 12---> 1100 ^ (1100 & 1011)==> 1100 ^ 1000==> 100;
	    n = log2(n);          //  log2(4) = 2;
	    cout << n+1 << endl;

	}
	return 0;
}
