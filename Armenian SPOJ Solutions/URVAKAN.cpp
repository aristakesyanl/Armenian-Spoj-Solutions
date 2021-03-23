#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, b, k;
    cin >> n >> a >> b;
    if ((sqrt(a) * sqrt(a)) == a)
    {
        k = b - a + 1 - (int)sqrt(b) + (int)sqrt(a) - 1;
        cout << k << endl;
    }
    else
    {
        k = b - a + 1 - (int)sqrt(b) + (int)sqrt(a);
        cout << k << endl;
    }

    return 0;
}