#include <iostream>
using namespace std;

int getLargestElemIndex(int arr[], int n)
{
    int i = 0, index = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > arr[index])
        {
            index = i;
        }
    }
    return index;
}

int secondLargestElemIndex(int arr[], int n)
{
    int i = 0, secLindex = -1;
    int larIndex = getLargestElemIndex(arr, n);
    for(i = 0; i < n; i++)
    {
        if(arr[i] != arr[larIndex])
        {
            if(secLindex == -1)
                secLindex = i;
            else if(arr[i] > arr[secLindex])
                secLindex = i;
        }
    }
    return secLindex;
}


int main()
{
    int arr[100], n, i, j;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter the elements in array: ";
    for(i = 0; i < n; i ++)
        cin >> arr[i];
    cout << "The second lagest element index is: " << secondLargestElemIndex(arr, n) << endl;
    return 0;
}
