#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    a[n+1]=0;
    int j=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans;
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(a[i]<=a[j]){
                break;  
            }
        }
        if(j==n){
            cout<<a[i];
        }
    }
}