#include<bits/stdc++.h>
using namespace std;
int arr[100000+10];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
 
    sort(arr,arr+n);
    int maxcount=0;
    for (int i = n-1; i >= 0; i--)
    {
        maxcount=max(arr[i]+(n-i),maxcount);
    }
 
    cout<<maxcount<<endl;
    return 0;
} 