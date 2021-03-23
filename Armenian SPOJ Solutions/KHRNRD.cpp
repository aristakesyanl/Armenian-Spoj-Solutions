#include <iostream>
using namespace std;
 
int table[1010][1010] = {0};
 
const int mod = 1000007;
 
int partition(int sum, int largestNumber)
{
    int i, j;
 
    for (i = 1; i <= sum; i++)
    {
        for (j = 1; j <= largestNumber; j++)
        {
            if (i - j < 0)
            {
                table[i][j] = table[i][j - 1];
                continue;
            }
            table[i][j] = (table[i][j - 1]%mod + table[i - j][j]%mod)%mod;
        }
    }
 
    return table[sum][largestNumber];
}
int main()
{
    int sum;
    int largestNumber;
    cin >> sum >> largestNumber;
 
    for (int i=0;i<=sum;i++)
        table[i][0]=0;
    for (int i=1;i<=largestNumber;i++)
        table[0][i]=1;
 
    cout << partition(sum, largestNumber);
 
    return 0;