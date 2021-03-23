#include <iostream>
using namespace std;
bool is_prime(int);
int main()
{
    int t;
    cin >> t;
    long long n;
    while (t > 0)
    {
        cin >> n;
        int m;
        if (is_prime(n))
            m = 1;
        else
        {
            if (n % 2 == 0)
                m = 2;
            else
            {
                if (is_prime(n - 2))
                    m = 2;
                else
                    m = 3;
            }
        }
        cout << m << endl;
        --t;
    }
    return 0;
}
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;