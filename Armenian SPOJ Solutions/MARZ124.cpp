#include <bits/stdc++.h>
using namespace std;
void generate(int m, int nx, int *s, int &ns)
{
    int i;
    int a, b;
    for (i = 10; i <= nx; i *= 10)
    {
        a = m * (nx / i);
        b = nx % i;
        s[ns++] = a * b;
        generate(a, b, s, ns);
    }
}
int main()
{
    int n;
    cin >> n;
    int dp[100000 + 10] = {0};
    int s[100000 + 10];

    for (int i = 10; i <= n; i++)
    {
        int na = 0;
        generate(1, i, s, na);
        for (int j = 0; j < na; j++)
        {
            dp[i] = max(dp[i], dp[s[j]]);
        }
        dp[i] += 1;
    }
    cout << dp[n] << endl;
    return 0;
}