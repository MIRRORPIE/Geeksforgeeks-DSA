#include <iostream>
#include <cmath>
using namespace std;

int maxProfit(int price[], int start, int end)
{
	if(end <= start)
		return 0;
	int profit = 0;
	for(int i = start; i < end; i++)
	{
		for(int j = i + 1; j <= end; j++)
		{
			if(price[j] > price[i])
			{
				int curr_profit = price[j] - price[i]
								  + maxProfit(price, start, i - 1)
								  + maxProfit(price, j + 1, end);
				profit = max(profit, curr_profit);
			}
		}
	}
	return profit;
}

int main()
{
    int arr[] = {120, 5, 8, 2, 114, 100, 10, 3, 8, 12}, n = 10;
    cout<<maxProfit(arr, 0, n - 1);
}

/*
{
    {1, 5, 3, 8, 12}:   4, -2, 5, 4;
    {120, 5, 3, 8, 12}:   -115, -2, 5, 4;
    {120, 5, 8, 2, 114, 100, 10, 3, 8, 12}:    -115, 3, -6, 112, -14, -90, -7, 5, 4;
}
*/
