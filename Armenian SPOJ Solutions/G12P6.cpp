#include <bits/stdc++.h> 
using namespace std; 
void primeFactors(int n)  
{ 
    int p=n;
    int count=0;
    long long int total=1;
    while (n % 2 == 0)  
    {  
        count++;
         
        n = n/2;  
    }  
    total=total*(2*count+1);
    for (int i = 3; i <= sqrt(p); i = i + 2)  
    {  
        int count=0;
        while (n % i == 0)  
        {  
            count++; 
            n = n/i;  
        }
        total=total*(2*count+1); 
    }  
    if (n > 2) 
    {
        total*=3;
    } 
    cout<<total; 
}  
int main()  
{  
    int n;
    cin>>n;  
    primeFactors(n);  
    return 0;  
}  