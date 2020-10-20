#include <iostream>
#include <cmath>
using namespace std;

void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);
		low++;
		high--;
	}
}

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 3;
    cout<<"Before Rotation"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftRotate(arr, d, n);
    cout<<"After Rotation"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
/*
ARR = 1 2 3 4 5 6 7 8 9 10
D = 4

1 2 3 4 5 6 7 8 9 10
4 3 2 1 5 6 7 8 9 10
4 3 2 1 10 9 8 7 6 5
5 6 7 8 9 10 1 2 3 4
*/
