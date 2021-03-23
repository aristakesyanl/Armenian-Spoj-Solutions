#include <iostream>
#include <string>
using namespace std;
string fnc1(int n, int k)
{
    long arr[35];
    arr[0] = 1;
    for (int i = 1; i < 35; ++i)
    {
        arr[i] = arr[i - 1] * 2;
    }
    if (k == 1)
    {
        if (n == 1)
            return "0";
        else
            return "1";
    }
    else
    {
        if (n > arr[k - 1])
            return "1" + fnc1(arr[k] - n + 1, k - 1);
        else
            return "0" + fnc1(n, k - 1);
    }
}
int fnc2(string str)
{
    long arr[35];
    arr[0] = 1;
    for (int i = 1; i < 35; ++i)
    {
        arr[i] = arr[i - 1] * 2;
    }
    if (str == "0")
        return 1;
    if (str == "1")
        return 2;
    else
    {
        if (str[0] == '1')
            return arr[str.size()] - fnc2(str.erase(0, 1)) + 1;
        else
            return fnc2(str.erase(0, 1));
    }
}
int main()
{
    long t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            long n;
            int k;
            cin >> n >> k;
            cout << fnc1(n, k) << endl;
        }
        else
        {
            string str;
            cin >> str;
            cout << fnc2(str) << endl;
        }
    }
    return 0;
}