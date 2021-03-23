#include <bits/stdc++.h>
using namespace std;
string str;
void solve()
{
    cin >> str;
    int count = 0;
    int len = str.size();
    int arr[len + 1][10];
    for (int i = 0; i <= len; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 0;
        }
    }

    int k = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = arr[i + 1][j];
        }

        if (arr[i][str[i] - '0'] == 0)
        {
            k++;
            arr[i][str[i] - '0'] = 1;
        }

        if (k == 10)
        {
            count++;
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = 0;
            }
            k = 0;
        }
    }
    int arr2[10][1000 + 10];
    int c[10];
    for (int i = 0; i < 10; i++)
    {
        c[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        arr2[str[i] - '0'][c[str[i] - '0']++] = i;
    }
    bool flag = false;
    bool flag1 = false;
    int mis;

    for (int i = 0; i < 10; i++)
    {
        if (arr[0][i] != 0)
            flag1 = true;
    }
    if (!flag1)
    {
        cout << 1;
        mis = 1;
    }

    else
    {
        for (int i = 1; i < 10; i++)
        {
            if (arr[0][i] == 0)
            {
                cout << i;
                mis = i;
                flag = true;
                i = 10;
            }
        }

        if (!flag && arr[0][0] == 0)
        {
            cout << "10";
            mis = 0;
        }

        if (count == 0)
        {
            return;
        }
    }
    //cout<<mis<<endl;
    int top[10];
    for (int i = 0; i < 10; i++)
    {
        top[i] = 0;
    }

    int pos = arr2[mis][top[mis]];
    //cout<<pos<<endl;

    while (count--)
    {
        pos = arr2[mis][top[mis]];
        for (int i = 0; i < 10; i++)
        {
            while (arr2[i][top[i]] <= pos)
            {
                top[i]++;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            //cout<<arr[pos+1][i]<<" ";
            if (arr[pos + 1][i] == 0)
            {
                mis = i;
                cout << mis;
                //pos=
                i = 10;
            }
        }
    }
    //cout << endl;
    return;
}
int main()
{
    solve();
    return 0;
}