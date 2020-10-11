#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, i;
    cout << "Enter a number n: ";
    cin >> n;
    r = n % 4;
    cout << "Order of 1: ";
    if(r == 0)
        cout << n;
    else if(r == 1)
        cout << 1;
    else if(r == 2)
        cout << n+1;
    else
        cout << 0;
    r = 0;
    for(i = 1; i <= n; i++)
        r = r ^ i;
    cout << endl;
    cout << "Order of n: " << r;
	return 0;
}
