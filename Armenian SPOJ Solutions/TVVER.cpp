#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int arr1[3];
    int p = k;
    int j = 2;
    while (p > 0)
    {
        arr1[j] = p % 10;
        j--;
        p /= 10;
    }
    cout << arr1[arr[0] - 1] << arr1[arr[1] - 1] << arr1[arr[2] - 1] << endl;
}