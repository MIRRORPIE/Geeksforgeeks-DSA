#include <iostream>
using namespace std;

void moveZeros(int *arr, int n)
{
    int res = 1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[res-1] = arr[i];
            arr[i] = 0;
            res++;
        }
    }
}

int main()
{
    int arr[] = {0, 10, 0, 0, 15, 14, 18, 16, 0, 14, 0, 17, 2, 0, 0, 8, 0, 2, 0, 0, 47, 0, 0, 78, 0, 0};
    int n = 26;
    cout << "Before movement of zeros:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    moveZeros(arr, n);
    cout << "\nAfter movement of zeros:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
