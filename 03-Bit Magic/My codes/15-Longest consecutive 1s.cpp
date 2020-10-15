#include <iostream>
using namespace std;

int longestConsecutiveOnes(int n)
{
    int count = 0;
    while(n)
    {
        n = (n & (n << 1));
        count += 1;
    }
    return count;
}

int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << longestConsecutiveOnes(n) << endl;
	}
	return 0;
}
