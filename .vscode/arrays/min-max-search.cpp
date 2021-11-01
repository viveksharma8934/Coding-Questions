#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxNo = a[0];
    int minNo = a[0];

    for(int i=0;i<n;i++){
        maxNo=max(maxNo,a[i]);
        minNo=min(minNo,a[i]);
    }
    cout<<maxNo<<" "<<minNo;
}

