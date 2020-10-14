#include <bits/stdc++.h>
using namespace std;

long long int getRightMostSetBit(long long int n)
{
    return log2(n & -n) + 1; //finding the rightmost set bit of a number
}

long long int posOfRightMostDiffBit(long long int m, long long int n)
{
    if(m==n)
    return -1; //if numbers are same then they have same bits

    return getRightMostSetBit(m ^ n); //xor the numbers and find their rightmost set bit.
    //xor only sets the dissimilar bits and unsets similar bits
}

int main()
{
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         long long int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;
}
