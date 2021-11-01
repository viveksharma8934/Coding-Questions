#include <iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }

    int currSum[n+1];
    currSum[0]=0;
    for(int i=1;i<n;i++){
        currSum[i]=currSum[i-1]+a[i-1];
    }
    int mx=INT_MIN;

    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currSum[i]-a[j];
            mx=max(mx,sum);
        }
    }
    cout<<mx<<endl;
}