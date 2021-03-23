#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2];
    cin >> arr[0] >> arr[1];
    sort(arr, arr + 2);
    int count = 0;
    if ((2 * arr[0]) <= arr[1])
        cout << 2 * arr[0] << endl;
    else
    {
        int diff = arr[1] - arr[0];
        count += diff * 2;
        arr[1] -= 2 * diff;
        arr[0] -= diff;
        while (arr[1] >= 2 && arr[0] >= 1)
        {
            arr[1] -= 2;
            arr[0] -= 1;
            swap(arr[1], arr[0]);
            count += 2;
        }

        sort(arr, arr + 2);
        if (arr[0] == 1 && arr[1] == 1)
            count += 1;
        else if (arr[0] == 1 && arr[1] > 1)
            count += 2;

        cout << count << endl;
    }

    return 0;
}