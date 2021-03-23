#include <iostream>
#include <algorithm>
using namespace std;
int arr[100010];
int arr1[100010];
int arr2[100010];
int largest(int arr[], int n)
{
    int ptr;
    for (int i = 0; i < n; i++)
        if (arr[i] == n)
            ptr = i;

    return ptr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int p = largest(arr, n);
    int p1 = p;
    arr1[0] = arr[p];
    for (int i = 1; i < n - p; i++)
    {
        arr1[i] = arr[p1 + 1];
        p1++;
    }

    int j = 0;
    int maxnum = arr[j];
    for (int i = n - p; i < n; i++)
    {
        arr1[i] = min(maxnum, arr[j + 1]);
        maxnum = max(maxnum, arr[j + 1]);
        j += 1;
    }

    arr2[0] = arr[0];

    for (int i = 1; i <= p; i++)
    {
        arr2[i] = max(arr2[i - 1], arr[i]);
    }

    int q;
    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        unsigned long long int k;
        cin >> k;
        

            if (k <= p)
        {

            int num1 = min(arr2[k - 1], arr[k]);
            int num2 = max(arr2[k - 1], arr[k]);

            cout << num2 << " " << num1 << endl;
        }

        else
        {

            k = k - p;
            if (k % (n - 1) == 0)
                k = n - 1;
            else
                k = k % (n - 1);

            cout << arr[p] << " " << arr1[k] << endl;
        }
    }

    return 0;
}