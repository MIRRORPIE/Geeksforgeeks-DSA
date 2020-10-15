#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    char res[10000];
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a position to Toggle bit: ";
    cin >> n;
    n = 1 << (n-1);
    x = x ^ n;
    cout << x;
	return 0;
}
