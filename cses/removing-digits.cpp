#include <iostream>
#include <vector>
#include<climits>
#define ll long long

using namespace std;

int main(){
    ll n,i;
    cin>>n;
    vector<ll> dp(n,INT_MAX);
    dp[0]=0;
    for(i=0;i<=n-1;i++){
        dp[i]=min(dp[i],n-n%10);
    }
}