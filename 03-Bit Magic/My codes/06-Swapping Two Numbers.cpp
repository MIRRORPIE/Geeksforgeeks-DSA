#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << "After swapping: " << a << " " << b;
	return 0;
}
