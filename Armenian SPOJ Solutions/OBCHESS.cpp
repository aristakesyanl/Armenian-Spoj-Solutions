#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int ABS(int n)
{
    if(n>=0) return n;
    return (-1)*n;

}
int main()
{
    ios_base::sync_with_stdio(false); 
    
   int arr[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    int mx = 0,
        count;
 
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            count = 0;
            if (ABS(arr[i][j]) != 4 && ABS(arr[i + 1][j]) != 4 && ABS(arr[i][j + 1]) != 4 && ABS(arr[i + 1][j + 1]) != 4)
            {
                count += arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1];
                mx = max(mx, count);
            }
        }
    }

    cout << mx << endl;
    return 0;
}  