#include <iostream>
using namespace std;

int sparseNumber(int n)
{
    int count = 0;
    while(n)
    {
        n = (n & (n << 1));
        count += 1;
        if(count >= 2)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    cout << sparseNumber(n) << endl;
	}
	return 0;
}
