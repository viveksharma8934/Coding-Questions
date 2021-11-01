#include <iostream>
#include <vector>
#define mod 1000000007
#define ll long long

using namespace std;

int main(){
    ll n,i,j;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0]=dp[1]=1;
    for(i=2;i<=n;i++){
        for(j=1;j<=6;j++){
            if(j>i) break;
            dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
        }
    }
    cout<<dp[n]%mod<<endl;
}