#include <iostream>
#include <algorithm>
using namespace std;
int arr[50010];
bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return (n == 1 ? false : true);
}

void maxprime(int arr[], int n, int k)
{
    int maxcount = 0;
    for (int i = 0; i < k; i++)
    {
        if (prime(arr[i]))
            maxcount++;
    }

    int count = maxcount;
    for (int i = k; i < n; ++i)
    {
        count += prime(arr[i]) - prime(arr[i - k]);
        maxcount = max(maxcount, count);
    }

    cout << maxcount << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxprime(arr, n, k);
    return 0;
}