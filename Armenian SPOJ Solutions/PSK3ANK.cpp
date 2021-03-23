#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }

    return count;
}
int countOfOddsPascal(int n)
{

    int c = countSetBits(n);

    return pow(2, c);
}
int main()
{
    int n;
    cin >> n;
    cout << countOfOddsPascal(n);
    return 0;
}