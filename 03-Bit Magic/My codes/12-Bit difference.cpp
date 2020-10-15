#include <iostream>
using namespace std;

int bitDiff(int a, int b)
{
    int x = a ^ b;
    int count = 0;
    while(x > 0)
    {
        x = (x & (x - 1));
        count++;
    }
    return count;
}



int main() {
	int t, a, b;
	cin >> t;
	while(t--)
	{
	    cin >> a >> b;
	    cout << bitDiff(a, b) << endl;
	}
	return 0;
}
