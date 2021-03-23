#include <iostream>
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

void solve()
{
    unsigned long long int n, count;
    cin >> n;
    count = nChoosek(2 * n, n);
    count /= n + 1;
    cout << count << endl;
}

int main()
{
    solve();
    return 0;
}