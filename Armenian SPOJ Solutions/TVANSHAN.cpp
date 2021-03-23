#include <iostream>
using namespace std;
long long int arr[15];
void solution(int n)
{
    arr[0]=0;
    arr[1]=9;
    for (int i = 2; i < 15; i++)
    {
        arr[i]=10*arr[i-1]+9;
    }
 
    long long int sum = 0;
    for (int i = 1; i < 15; i++)
    {
        if (n <= arr[i])
        {
            n = n - arr[i - 1];
            for (int j = 1; j < i; j++)
            {
                sum += j * (arr[j] - arr[j - 1]);
            }
            sum += i * n;
 
            cout << sum << endl;
            i = 15;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    solution(n);
 
    return 0;
} 