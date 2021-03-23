#include <bits/stdc++.h>
using namespace std;
int arr[500000 + 10];
int sorted[500000 + 10];
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }

    sort(sorted, sorted + n);

    long long int j = 0;
    long long int count = 0;
    long long int curr = 0;

    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] == sorted[j])
        {
            //cout<<i<<endl;
            count += i - curr - 1;
            curr = i;
            j++;
        }
    }

    count += n - curr;

    cout << count << endl;

    return 0;
}