#include<iostream>
using namespace std;
int main()
{
    long long int arr[82];
    arr[1]=2;
    arr[2]=4;
 
    for (int i = 3; i < 82 ; i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
    return 0;
} 