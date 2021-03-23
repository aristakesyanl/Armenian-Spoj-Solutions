#include <bits/stdc++.h>
using namespace std;
long long int fact(long long int n, long long int m)
{
    if (n >= m)
        return 0;
    else
    {
        long long int res = 1;
        for (long long int i = 2; i <= n; i++)
        {
            res = (res * i) % m;
        }
 
        return res % m;
    }
}
int main()
{
    long long int n, m;
    cin >> n >> m;
    if (n <= 2)
        cout << n % m << endl;
    else if (n == 3)
        cout << fact(720, m) << endl;
    else
    {
        cout << 0 << endl;
    }
 
    return 0;
} 