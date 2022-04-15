#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 1000 + 10;
const int K=100+10;
const int P=7;
int lg[N+1];
int st[N][P+1];
int arr[N];
int dp[N][K];
void solve(){
    int n, k;
    cin>>n>>k;
    int sum=0;
    int m=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        m=max(m,arr[i]);
    }
    if(k==1){
        cout<<m<<endl;
        return;
    }

    lg[1] = 0;
    for (int i = 2; i <= N; i++)
        lg[i] = lg[i/2] + 1;

    for(int i=0; i<n; i++){
        st[i][0]=arr[i];
    }

    for (int j = 1; j <= P; j++)
    for (int i = 0; i + (1 << j) < N; i++)
        st[i][j] = max(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);



    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        mx=max(mx,arr[i]);
        dp[i][1]=mx;
    }


    for(int j=2; j<=k; j++){
        for(int i=0; i<n; i++){
            if(i+1<j) dp[i][j]=-1;
            else{
                int ans=INT_MAX;
                for(int p=0; p<i; p++){
                    if(dp[p][j-1]!=-1){
                        int L=p+1;
                        int R=i;
                        int q = lg[R - L + 1];
                        int x=max(st[L][q], st[R - (1 << q) + 1][q]);
                        ans=min(dp[p][j-1]+x,ans);
                    }
                    dp[i][j]=ans;

                }
            }
        }
    }    

    cout<<dp[n-1][k]<<endl;

}


int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}    
