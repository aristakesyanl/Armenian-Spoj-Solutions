#include <iostream>
using namespace std;
int arr1[1010];
int arr2[1010];
bool check[1010] = {false};
int main()
{
    int n, s, j, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> arr1[i];

        for (j = 1; (arr1[i] > 0 || check[j] == 1); j++)
        {
            if (check[j] == 0)
            {
                arr1[i]--;
            }
        }

        arr2[j] = i;
        check[j] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}