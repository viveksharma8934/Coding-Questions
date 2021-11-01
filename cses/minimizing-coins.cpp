#include <iostream>
#include <vector>
#include<climits>
#define ll long long

using namespace std;

int main(){
    ll n,x,i,j;
    cin>>n>>x;
    vector<ll> dp(x+1,INT_MAX);
    vector<ll> coins(n);
    for(i=0;i<=n-1;i++){
        cin>>coins[i];
    }
    dp[0]=0;
    for(i=1;i<=x;i++){
        for(j=0;j<=n-1;++){
            if(coins[j]>i) continue;
            dp[i]=min(dp[i],1+dp[i-coins[j]]);
        }
    }if(dp[x]==INT_MAX){
        cout<<-1;
    }else{
        cout<<dp[x];
    }
    
}