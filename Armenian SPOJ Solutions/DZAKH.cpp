#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    pair<int, int> points[110];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
    }
    int count = 0;
 
    for (int i = 0; i < n - 2; i++)
    {
        if((points[i+2].first-points[i].first)*(points[i+1].second-points[i].second)-(points[i+1].first-points[i].first)*(points[i+2].second-points[i].second)<0)
         count++;
    }
    cout << count << endl;
}