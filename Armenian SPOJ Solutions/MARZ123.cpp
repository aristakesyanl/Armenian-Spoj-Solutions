#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, comp, minpar, m;
    cin >> n;
    comp = ceil(sqrt(n));
     m = 4 * n;
 
    if (comp * (comp - 1) >= n)
    {
        minpar = 4 * comp - 2;
        m = (m - minpar) / 2;
        m += minpar;
    }
    else 
    {
        minpar = 4 * comp;
        m = (m - minpar) / 2;
        m += minpar;
    }
    cout << m << endl;
    return 0;
} 