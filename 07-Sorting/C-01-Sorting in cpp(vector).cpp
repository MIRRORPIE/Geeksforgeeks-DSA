#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {45, 15, 10, 20, 8, 5, 45, 80, 2, 17};
    sort(v.begin(), v.end());
    for(int x: v)
        cout << x << "  ";

    sort(v.begin(), v.end(), greater<int>());
    cout << endl;
    for(int x: v)
        cout << x << "  ";
    return 0;
}
