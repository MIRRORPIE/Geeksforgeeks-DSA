#include <iostream>
using namespace std;

int sparseNumber(int n)
{
    int temp = n >> 1;
    if((n & temp) == 0)
        return 1;
    else
        return 0;

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
