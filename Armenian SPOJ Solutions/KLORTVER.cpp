#include <bits/stdc++.h>
using namespace std;
int a[11];
void bin(unsigned n, unsigned order)
{
    unsigned i;
    for (i = 1 << order; i > 0; i = i / 2)
        (n & i) ? printf("5") : printf("0");
}

int main(void)
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 0 << endl;
    else
    {
        a[0] = 1;
        for (int i = 1; i <= 11; i++)
        {
            a[i] = a[i - 1] * 2;
        }

        int order;

        for (int i = 0; i <= 11; i++)
        {
            if (n - 1 < a[i])
            {
                order = i;
                break;
            }
        }

        bin(n - 1, order - 1);
    }

    return 0;
}