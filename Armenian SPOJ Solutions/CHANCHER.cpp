#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
unsigned long long int nChoosek(unsigned long long int n, unsigned long long int k)
{
    if (k > n)
        return 0;
    if (k * 2 > n)
        k = n - k;
    if (k == 0)
        return 1;

    unsigned long long int result = n;
    for (unsigned long long int i = 2; i <= k; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}
int main()
{
    unsigned long long int n, k;
    cin >> n >> k;
    cout << nChoosek(n + k - 1, n) << endl;
    return 0;
}