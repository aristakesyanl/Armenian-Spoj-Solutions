#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
#include <iostream>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long int a[110];
long long int b[110];
int main()
{
    long long int n, sum = 1, k;
    cin >> n;
    for (long long int i = 2; i <= n; i++)
    {
        a[i] = i + n;
        b[i] = i;
    }

    for (long long int i = 2; i <= n; i++)
    {
        for (long long int j = 2; j <= n; j++)
        {
            k = gcd(a[i], b[j]);
            a[i] /= k;
            b[j] /= k;
        }
    }

    for (long long int i = 2; i <= n; i++)
    {
        sum *= a[i];
        sum %= 1000000;
    }

    cout << sum << endl;
}