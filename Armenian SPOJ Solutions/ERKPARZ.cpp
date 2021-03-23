#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n==1) return false;
    if(n==2) return true;
    else
    {
         for (int i = 2; i*i<=n; i++)
       {
         if(n%i==0) return false;
       }
 
       return true;
    }
}
int main()
{
    int a, b;
    cin>>a>>b;
    int count=0;
    for (int i = a; i <=b; i++)
    {
        if(i%2==0) count++;
        else
        {
            if(prime(i-2)) count++;
        }
        
       
    }
    cout<<count<<endl;
    return 0;
} 