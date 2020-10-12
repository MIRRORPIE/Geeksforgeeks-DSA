#include <iostream>
using namespace std;

int getSum(int n)
{
	if(n == 0)
		return 0;
	return n + getSum(n - 1);
}

// Tail recursion
int getSumTail(int n, int s)
{
    if(n == 0)
        return s;
    return getSumTail(n-1, n+s);
}

int main()
{
	int n = 14;
	cout<<getSum(n);
	cout<<endl<<getSumTail(n, 0);
	return 0;
}
