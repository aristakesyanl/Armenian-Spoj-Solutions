#include <iostream>
#include <algorithm>
using namespace std;
int arr[3010];
int main()
{
    int n, t, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> d;
        arr[t]++;
        arr[t + d]++;
        arr[t + 2 * d]++;
    }

    int maxcount = 0;
    for (int i = 0; i < 3010; i++)
    {
        maxcount = max(maxcount, arr[i]);
    }

    if (maxcount % 2 == 0)
        cout << maxcount / 2 << endl;
    else
        cout << maxcount / 2 + 1 << endl;
    return 0;
}