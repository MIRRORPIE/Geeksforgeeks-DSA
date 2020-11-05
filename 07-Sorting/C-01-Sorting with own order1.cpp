#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int x, y;
};

bool comparePoint(Point p1, Point p2)
{
	return (p1.x < p2.x);
}

int main()
{
	Point arr[] = {{ 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 }};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n, comparePoint);
	cout << "Points sorted by x value : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].x << "," << arr[i].y << "] ";

    cout << endl;

    for(Point p: arr)
    {
        cout << "[" << p.x << "," << p.y << "] ";
    }
	return 0;
}
