#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int w, h, a, b, s1, s2, s3, s4;
    cin>>w>>h>>a>>b;
    s1=a*(h-b);
    s2=a*b;
    s3=(w-a)*(h-b);
    s4=(w-a)*b;
    s1=max(s1,s2);
    s3=max(s3,s4);
    s1=max(s1,s3);
    cout<<s1<<endl;
    return 0;
 
} 