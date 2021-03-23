#include <iostream>
#include <algorithm>
using namespace std;
int arr[3];
int arr1[3];
int fnc(int arr[], int n)
{
    sort(arr, arr + 3);
 
    for (int i = 0; i < 3; i++)
    {
        arr1[i] = arr[i] % 3;
    }
 
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i] == 0)
            return arr[i];
    }
 
    if (arr1[0] != arr1[1])
        return 10 * arr[0] + arr[1];
    if (arr1[0] != arr1[2])
        return 10 * arr[0] + arr[2];
    if (arr1[1] != arr1[2])
        return 10 * arr[1] + arr[2];
    else
    {
        return 100 * arr[0] + 10 * arr[0] + arr[0];
    }
}
int main()
{
 
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
 
    cout << fnc(arr, 3) << endl;
 
    return 0;
} 