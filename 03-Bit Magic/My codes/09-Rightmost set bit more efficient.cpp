#include <bits/stdc++.h>
using namespace std;

long long int getRightMostSetBit(long long int n)
{
    if(n == 0)
        return 0;
    return log2(n & -n) + 1; //finding the rightmost set bit of a number
}

int main()
{
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         long long int n;
         cin>>n; //input n
         cout << getRightMostSetBit(n)<<endl;
    }
    return 0;
}

