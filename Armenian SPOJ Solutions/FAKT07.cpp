#include<iostream>
#include<cmath>
using namespace std;
void primeFactors(int n, int arr [], int count)
{
     while (n % 2 == 0)  
    {  
        arr[2]++;  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            arr[i]++;  
            n = n/i;  
        }  
    }  
  
    if (n > 2)  
    arr[n]++;  
}
int main()
{
    int n;
    cin>>n;
    const int count=41;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        arr[i]=1;
    }
    
    for (int i = 2; i <=n; i++)
    {
       primeFactors(i,arr,count);
    }
    int cnt=1;
    for (int i = 0; i < count; i++)
    {
        cnt*=arr[i];
    }
    cout<<cnt<<endl;
    return 0;
} 