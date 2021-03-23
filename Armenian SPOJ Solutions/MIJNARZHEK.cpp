#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, y, k, m = 0;
    long long int res = 0;
    cin >> n;
    priority_queue<long long int> pq1;
    priority_queue<long long int> pq2;
    for (long long int i = 0; i < n; i++)
    {
        cin >> k;
        pq1.push(k);
        if (i % 2)
        {
            pq2.push(-pq1.top());
            pq1.pop();
        }
        if (pq2.size() && pq1.top() > -pq2.top())
        {
            x = pq1.top();
            pq2.push(-x);
            pq1.pop();
            y = pq2.top();
            pq1.push(-y);
            pq2.pop();
        }

        if (i % 2)
        {
            x = pq1.top() - pq2.top();
            m += x % 2;
            res += x / 2;
        }

        else
        {
            res += pq1.top();
        }
    }

    res += m / 2;
    cout << res;
    if (m % 2)
        cout << ".5";
    cout << endl;
    return 0;
}