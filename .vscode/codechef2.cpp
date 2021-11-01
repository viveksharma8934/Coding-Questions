#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,p,q,a1,b1;
        cin>>a>>b>>p>>q;
        if(p%a==0){
            a1=p/a;
        }else if(q%a==0){
            a1=q/a;
        }
        if(p%b==0){
            b1=p/b;
        }else if(q%b==0){
            b1=q/b;
        }
        if(abs(a1-b1)==1 ){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}