#include <iostream>

using namespace std;

int main(){
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;

    int i=0,j=0,sum=0,st=0,en=0;

    while(j<n & s>=sum+a[j]){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum -= a[i];
            i++;
        }
        if(sum==s){
           st=i+1;
           en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;  
}
