#include<iostream>
#include<algorithm>
using namespace std;
int arr[502000];
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
 
    return r; 
} 
void closest(int arr[], int n, int x)
{
    sort(arr,arr+n);
    int diff=INT32_MAX;
    int l=0;
    int r=n-1;
    int k,p;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>x) continue;
        k=x-arr[i];
        p=binarySearch(arr,l,r,k);
        k=x-arr[p]-arr[i];
        diff=min(diff,k);
 
    }
    
    cout<<x-diff<<endl;
}
int main()
{
    int n,k,x;
    cin>>n>>x;
    k=n+1+(n*(n-1))/2+n;
    arr[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
 
    int p=n+2;
   
    for(int i=1; i<=n;++i)
    {
        for(int j=i;j<=n;++j)
        {
            arr[p]=arr[i]+arr[j];
            p++;
        }
    }
    
   closest(arr,k,x);
  
    return 0;
} 