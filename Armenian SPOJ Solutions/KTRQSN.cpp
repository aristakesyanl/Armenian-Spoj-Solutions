#include <iostream>
using namespace std;
unsigned long long int nChoosek(unsigned long long int n, unsigned long long int k)
{
    if (k > n)
        return 0;
    if (k * 2 > n)
        k = n - k;
    if (k == 0)
        return 1;
 
    unsigned long long int result = n;
    for (unsigned long long int i = 2; i <= k; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}
int main()
{
    unsigned long long int n, k, i, j;
    cin >> k >> n;
    unsigned long long int count=0;
 
    for (i = 1; i <= n -k +1; i++)
    {
        for (j = 0; j <= n - i - k + 1; j+=2)
        {
           count+=nChoosek(j/2+k-2,j/2);
        }
    }

    cout<<count<<endl;
} 