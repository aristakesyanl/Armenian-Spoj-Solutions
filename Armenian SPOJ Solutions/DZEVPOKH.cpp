#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string str1;
    int n;
    cin>>n;
    cin>>str;
    while(n--)
    {
        int len = str.size();
        int k = 1;
        int j=0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == str[i + 1])
            {
                k++;
            }
 
            else
            {
              str1+=to_string(k)+str[i];
              k=1;
            }
        }
        str.clear();
        str=str1;
        str1.clear();
    }
    cout<<str<<endl;
    return 0;
} 