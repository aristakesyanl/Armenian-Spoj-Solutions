#include <bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int k = 0;
    int n;
    cin >> n;
    for (int i = 9; i >= 2; i--)
    {
        while (n % i == 0)
        {
            a[k] = i;
            k++;
            n = n / i;
        }
    }

    if (n > 1)
        cout << 0 << endl;
    else
    {
        for (int i = k - 1; i >= 0; i--)
        {
            cout << a[i];
        }
    }

    return 0;
}