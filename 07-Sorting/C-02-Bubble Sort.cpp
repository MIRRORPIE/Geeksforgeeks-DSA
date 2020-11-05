#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j+1] < arr[j])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
}

int main()
{
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int x: arr)
        cout << x << " ";
    return 0;
}
