#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0,statec=0,distc=0,distp,statep,n;
        string str;
        cin>>n>>distp>>statep;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='0') distc++;
            else statec++;
        }
        sum=((distc*distp)+(statec*statep));
        cout<<sum<<endl;    
    }
    return 0;
}