#include <iostream>
using namespace std;
int main()
{
    long n1;
    cin >> n1;
    int *arr1 = new int[n1];
    for (int i = 0; i < n1; ++i)
    {
        cin >> arr1[i];
    }

    long n2;
    cin >> n2;
    int *arr2 = new int[n2];
    for (int i = 0; i < n2; ++i)
    {
        cin >> arr2[i];
    }

    double m1 = 0;
    double m2 = 0;
    for (int i = 0; i < n1; ++i)
    {
        m1 += arr1[i];
    }

    for (int i = 0; i < n2; ++i)
    {
        m2 += arr2[i];
    }
    m1 = m1 / n1;
    m2 = m2 / n2;

    long count = 0;

    for (int i = 0; i < n1; ++i)
    {
        if (arr1[i] < m1 && arr1[i] > m2)
            ++count;
    }

    cout << count << endl;
    delete[] arr1;
    delete[] arr2;

    return 0;
}