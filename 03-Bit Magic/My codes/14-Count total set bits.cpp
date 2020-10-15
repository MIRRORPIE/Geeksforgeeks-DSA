#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0, i = 1;
    if(n == 0) return 0;
    for(i = 1; i <= n; i++)
    {
        int g = i;
        while(g)
        {
            g = (g & (g-1));
            count += 1;
        }
    }
    return count;
}


int main() {
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << countSetBits(n) << endl;
	}
	return 0;
}
