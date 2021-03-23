#include <iostream>
#include <algorithm>
using namespace std;

bool fnc(pair<int, int> arr[], int n)
{
    if (arr[0].first != 0 || arr[n - 1].second != 10000)
        return false;

    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i].first == arr[i - 1].first || arr[i].first > arr[i - 1].second || arr[i].second <= arr[i - 1].second || arr[i + 1].first <= arr[i - 1].second)
                return false;
        }

        if (arr[n - 1].first > arr[n - 2].second || arr[n - 1].second <= arr[n - 2].second || arr[n - 1].first == arr[n - 2].first)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    pair<int, int> arr[10000 + 10];
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }

        sort(arr, arr + n);

        if (fnc(arr, n))
            cout << "OK" << endl;
        else
        {
            cout << "WA" << endl;
        }
    }

    return 0;
}