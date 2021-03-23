#include <iostream>
#include <stack>
using namespace std;
void printPrevSmaller(int arr[], int n)
{
    stack<int> S;

    for (int i = 0; i < n; i++)
    {

        while (!S.empty() && arr[S.top()] < arr[i])
            S.pop();

        if (S.empty())
            cout << "OOPS" << endl;
        else
            cout << S.top() + 1 << endl;

        S.push(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int arr[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printPrevSmaller(arr, n);
    return 0;
}