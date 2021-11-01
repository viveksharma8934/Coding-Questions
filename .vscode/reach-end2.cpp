#include <iostream>
#include <vector>
#define mod 1000000007
#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    ll n,x,y;
    cin>>n;
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1;
        }
    }
    for(int i=0;i<=n-1;i++){
        cin>>x>>y;
        a[x-1][y-1]=0;
    }

    if((a[0][1]==0 && a[1][0]==0) || (a[n-2][n-1] && a[n-1][n-2]) ){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    }
}