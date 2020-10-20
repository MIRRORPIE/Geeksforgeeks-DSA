#include <iostream>
using namespace std;

int secondLargestElemIndex(int arr[], int n)
{
    int i = 0, secLindex = -1, larIndex = 0;
    for(i = 1; i < n; i++)
    {
        if(arr[i] > arr[larIndex])
        {
            secLindex = larIndex;
            larIndex = i;
        }
        else if(arr[i] != arr[larIndex])
        {
            if(secLindex == -1 || arr[i] > arr[secLindex])
            {
                secLindex = i;
            }
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
