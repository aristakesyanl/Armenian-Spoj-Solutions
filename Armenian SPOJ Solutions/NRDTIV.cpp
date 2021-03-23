#include <bits/stdc++.h>
using namespace std;
long long int biggest_index[100];
long long int degree_4[100];
int main()
{
    const int count = 16;
    degree_4[0] = 1;
 
    for (int i = 1; i < count; i++)
    {
        degree_4[i] = degree_4[i - 1] * 4;
    }
 
    biggest_index[1] = 4;
    for (int i = 2; i < count; i++)
    {
 
        biggest_index[i] = biggest_index[i - 1] + degree_4[i];
    }
    long long int n;
    cin >> n;
    long long int k = n;
    long long int p;
    long long int digit;
    long long m;
 
    if (n <= 4)
    {
        cout << n << endl;
    }
 
    else
    {
        for (int i = 1; i < count; i++)
        {
            if (n <= biggest_index[i])
            {
                p = i;
                i = count;
            }
        }
 
        k = k - biggest_index[p - 1];
        while(p>0)
        {
            digit = (k + degree_4[p - 1] - 1) / degree_4[p - 1];
            cout << digit;
            k -= (digit - 1) * degree_4[p - 1];
            p--;
        }
    }
    return 0;
} 