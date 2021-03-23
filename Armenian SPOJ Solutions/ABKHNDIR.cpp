#include <bits/stdc++.h>
using namespace std;
long long int b[2000000 + 10];
long long int p[2000000 + 10];
long long int m[2000000 + 10];
int main()
{
    long long int n;
    cin >> n;
    string a;
    cin >> a;

    long long int count1 = 0, count2 = 0;

    for (long long int i = 0; i < n; i++)
    {
        if (a[i] == 'a')
        {
            count1++;
        }

        else
        {
            count2++;
        }

        b[i] = count1 - count2;

        if (b[i] < 0)
        {
            m[abs(b[i])]++;
        }

        else
        {
            p[b[i]]++;
        }
    }

    long long int f_zero = (p[0] * (p[0] - 1)) / 2 + p[0];

    long long int count = f_zero;

    for (long long int i = 1; i <= n; i++)
    {
        count += (m[i] * (m[i] - 1)) / 2;
        count += (p[i] * (p[i] - 1)) / 2;
    }

    cout << count << endl;
}