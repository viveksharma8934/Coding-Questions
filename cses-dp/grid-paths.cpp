#include <iostream>
#include <vector>
#define mod 1000000007
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<vector<ll>> a(n,vector<ll>(n,0));

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            char ch;
            cin>>ch;
            a[i][j]=(ch=='.') ? 1:0;
        }
    }
    vector<vector<ll>> dp(n,vector<ll>(n,0));
    if(a[n-1][n-1]==1) dp[n-1][n-1]=1;

    for(int i=n-2;i>=0;i--){
        if(a[i][n-1]==0) dp[i][n-1];
        else{
            dp[i][n-1]+=dp[i+1][n-1];
        }
    }

    for(int i=n-2;i>=0;i--){
        if(a[n-1][i]==0) dp[n-1][i]=0;
        else{
            dp[n-1][i]+=dp[n-1][i+1];
        }
    }

    for(int i=n-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            if(a[i][j]==0) dp[i][j]=0;
            else{
                dp[i][j]=((dp[i+1][j])%mod+(dp[i][j+1])%mod)%mod;
            }
        }
    }

    cout<<dp[0][0]<<endl;
}