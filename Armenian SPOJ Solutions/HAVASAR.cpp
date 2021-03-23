#include <iostream>
using namespace std;
int main()
{
    int n, s, i;
    s = 1;
    cin >> n;
    for (i = 0; s < n; ++i)
    {
        s *= 2;
    }
    cout << i << endl;
}