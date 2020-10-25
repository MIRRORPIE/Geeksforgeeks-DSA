#include <iostream>
#include <cmath>
using namespace std;

int maxDiff(int arr[], int n)
{
	int res = arr[1] - arr[0], minVal = arr[0];
	cout << "\tResult \t\tMinval\n";
	for(int i = 1; i < n; i++)
	{
	    cout << "\t" << res << "\t\t" << minVal << endl;
        res = max(res, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
	}
	return res;
}

int main()
{
    int arr[] = {2, 3, 4, 1, 5, 10, 6, 4, 8, 1}, n = 7;
    cout<<maxDiff(arr, n);
}
