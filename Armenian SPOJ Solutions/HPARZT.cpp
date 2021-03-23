#include <bits/stdc++.h>
using namespace std;
int prime[1000000 + 10];
int rev[1000000 + 10];
bool check[1000000 + 10];
void sieve(int n, int &count)
{
    memset(check, true, sizeof(check));
    for (int p = 2; p * p <= n; p++)
    {
        if (check[p] == true)
        {
            for (int i = 2 * p; i <= n; i += p)
            {
                check[i] = false;
            }
        }
    }
    prime[count++] = 2;

    for (int i = 3; i <= n; i++)
    {
        if (check[i])
        {
            prime[count++] = i + prime[count - 1];
        }
    }

    for (int i = 0; i < count; i++)
    {
        rev[i] = -prime[count - i - 1];
    }

    rev[count] = 0;
}

int countPairs(int arr1[], int arr2[],
               int m, int x)
{
    int count = 0;
    int l = 0, r = m;

    while (l < m && r >= 0)
    {
        if ((arr1[l] + arr2[r]) == x)
        {
            l++;
            r--;
            count++;
        }

        else if ((arr1[l] + arr2[r]) < x)
            l++;

        else
            r--;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        sieve(n, count);
        cout << countPairs(prime, rev, count, n) << endl;
    }
    return 0;
}