#include <iostream>
#include <cstring>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
int sieve(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int p = i * i; p <= n; p += i)
            {
                prime[p] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            count++;
    }

    return count;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        if (n == 2 || n == 3)
            cout << "1" << endl;
        else
        {

            cout << sieve(2 * n) - sieve(n) << endl;
        }
    }

    return 0;