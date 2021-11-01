#include <iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mx=INT_MIN;
    int currSum=0;

    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
        mx=max(currSum,mx);
    }
    cout<<mx<<endl;
    return 0;
}