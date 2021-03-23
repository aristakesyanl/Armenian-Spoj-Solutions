#include <iostream>
#include <string>
using namespace std;
string repeat(string s, int n)
{
 
    string s1 = s;
 
    for (int i = 1; i < n; i++)
        s += s1;
 
    return s;
}
 
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string str_b = "100";
    string str_c = "110";
    str_b = repeat(str_b, 2 * 100000);
    str_c = repeat(str_c, 2 * 100000);
 
    string str;
 
    if ((a > 0 && b == 0 && c > 0) || (b > 0 && c == 0 && d > 0) || (a>0 && b==0 && c==0 && d>0))
        cout << "IMPOSSIBLE" << endl;
 
    else
    {
        if (a > 0 && b > 0 && c > 0 && d > 0)
        {
            for (int i = str_c.size() - c + 1; i < str_c.size(); i++)
            {
                cout << str_c[i];
            }
 
            str = string(d + 2, '1') + "00" + string(a, '0');
 
            cout << str;
 
            for (int i = 0; i < b - 1; i++)
            {
                cout << str_b[i];
            }
        }
 
        if (a > 0 && b > 0 && c == 0 && d == 0)
        {
            str = string(a + 2, '0');
            cout<<str;
            for (int i = 0; i < b; i++)
            {
                cout << str_b[i];
            }
        }
 
        if (a == 0 && b == 0 && c > 0 && d > 0)
        {
            for (int i = str_c.size() - c; i < str_c.size(); i++)
            {
                cout << str_c[i];
            }
 
            str = string(d + 2, '1');
            cout << str;
        }
 
        if (a > 0 && (b + c + d) == 0)
        {
            str = string(a + 2, '0');
            cout << str;
        }
 
        if (b > 0 && (a + c + d) == 0)
        {
            for (int i = 0; i < b + 2; i++)
            {
                cout << str_b[i];
            }
        }
 
        if (c > 0 && (a + b + d) == 0)
        {
            for (int i = 0; i < c + 2; i++)
            {
                cout << str_c[i];
            }
        }
 
        if (d > 0 && (b + c + a) == 0)
        {
            str = string(d + 2, '1');
            cout << str;
        }
    }
 
    return 0;
}