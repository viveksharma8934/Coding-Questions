#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int lcm(int a,int b){    
    return (a/(gcd(a,b)))*b;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int c=a*b;
        if(a==1 && b==1){
            cout<<1<<" "<<1<<endl;
        }else if (a==b){
            cout<<a;
            cout<<" "<<lcm(c-1,c)<<endl;
        }
        else{
            cout<<lcm(a,a*2);
            cout<<" "<<lcm(c-1,c)<<endl;
        }   
    }
    
}