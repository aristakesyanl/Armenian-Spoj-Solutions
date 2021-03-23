#include <iostream>
#include <algorithm>
using namespace std;
int fnc(int a[], int m, int n)
{
    int p, k;

    for (int i = 1;; i++)
    {
        p = i * n;
        while (p > 0)
        {
            k = p % 10;
            if (a[k] == 0)
            {
                return i - 1;
            }

            else
            {
                a[k]--;
            }

            p = p / 10;
        }
    }
}

int main()
{
    int a[10];
    int n;
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << fnc(a, 10, n) << endl;

    return 0;
}