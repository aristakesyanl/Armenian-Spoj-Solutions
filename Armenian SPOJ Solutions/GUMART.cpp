#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 2;
    else
    {
        cout << 2 << " " << n << " ";
        for (int i = 1; i <= n - 2; i++)
        {
            cout << 1 << " ";
        }
    }
    return 0;
}