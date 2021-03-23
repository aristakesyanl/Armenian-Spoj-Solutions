#include <iostream>
using namespace std;
int solution(int n)
{

    int s;
    for (int i = 1; i <= n; i++)
    {
        s = i;
        for (int j = 0; j < i; j++)
        {
            s += s + 1;

            if (n - s <= s + 1)
            {
                return i;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 0 << endl;
    else
    {
        cout << solution(n) << endl;
    }

    return 0;
}