#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
string removeKdigits(string s, int k)
{
    stack<char> stk;
    int n = s.length();
    int i, j;
    if (k == n)
        return "0";
    string ans;
    stk.push(s[0]);
    for (i = 1; i < n && k > 0; i++)
    {
        if (stk.empty() || s[i] <= stk.top())
        {
            bool f = true;
            if (s[i] == '0' && stk.empty())
                f = false;
            if (f)
                stk.push(s[i]);
        }
        else
        {
            while (k > 0 && !stk.empty() && s[i] > stk.top())
            {
                k--;
                stk.pop();
            }
            bool f = true;
            if (s[i] == '0' && stk.empty())
                f = false;
            if (f)
                stk.push(s[i]);
        }
    }
    while (k > 0)
    {
        stk.pop();
        k--;
    }
    while (!stk.empty())
    {
        ans += stk.top();
        stk.pop();
    }
    reverse(ans.begin(), ans.end());
    if (ans.length() == 0)
    {
        while (i < n && s[i] == '0')
            i++;
    }
    while (i < n)
    {
        ans += s[i];
        i++;
    }
    return ans.length() ? ans : "0";
}
int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;
    cout << removeKdigits(str, k) << endl;

    return 0;
}