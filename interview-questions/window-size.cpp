#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int j=0;
    int mx=INT_MAX;
    while(k<=n){
        int sum=0;
        for(int i=j;i<k;i++){
            sum+=a[i];
        }
        mx=min(mx,sum);
        j++;
        k++;
    }
    cout<<mx<<endl;
}