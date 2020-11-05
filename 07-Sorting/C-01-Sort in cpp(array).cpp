#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n = 10;
    int arr[] = {45, 15, 10, 20, 8, 5, 45, 80, 2, 17};
    sort(arr, arr+n);
    for(int x: arr)
        cout << x << "  ";

    sort(arr, arr+n, greater<int>());
    cout << endl;
    for(int x: arr)
        cout << x << "  ";
    return 0;
}
