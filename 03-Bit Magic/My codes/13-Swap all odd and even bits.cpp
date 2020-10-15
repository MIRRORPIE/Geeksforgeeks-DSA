#include <iostream>
using namespace std;

int swapAllOddAndEvenBits(int n)
{
    int e = n & 170;
    int o = n & 341;
    e = e >> 1;
    o = o << 1;
    return e | o;
}


int main() {
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << swapAllOddAndEvenBits(n) << endl;
	}
	return 0;
}
