#include <bits/stdc++.h>
using namespace std;
int arr[100000 + 10];
int main()
{
    string vank[50];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> vank[i];
    }
 
    int n, k, x;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> x;
            str += vank[x];
        }
 
        cout << str << endl;
        str.clear();
    }
    return 0;
} 