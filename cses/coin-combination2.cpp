#include <iostream>
#include<vector>
#define ll long long
#define mod 1000000007

using namespace std; 

int main(){
    ll n,x,i,j;
    cin>>n>>x;
    vector<ll> dp(x+1,0);
    dp[0]=1;
    vector<ll> coins(n);
    for(i=0;i<=n-1;i++){
        cin>>coins[i];
    }
    for(j=0;j<=n-1;j++){
        for(i=1;i<=x;i++){
            if(coins[j]>i) continue;
            dp[i]=(dp[i]+dp[i-coins[j]])%mod;
        }
    }
    cout<<dp[x]%mod<<endl;
}