#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int x, temp, c = 0;
    char res[10000];
    cout << "Enter a number: ";
    cin >> x;
    itoa(x,res,2);
    cout << "Before flipping: " << res << "\n";
    temp = x;
    while(temp)
    {
        temp = temp >> 1;
        c += 1;
    }
    temp = pow(2, c) - 1;
    x = temp - x;
    cout << x;
    cout << endl;
    itoa(x,res,2);
    cout << "After flipping: " << res;
	return 0;
}
