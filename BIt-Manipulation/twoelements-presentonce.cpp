#include <iostream>

using namespace std;

int setBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int twounique(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }

    int temp=xorsum;
    int setbit=0,pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(a[i],pos-1))
            newxor=newxor^a[i];
    }
    cout<<newxor<<endl;
    cout<<(temp^newxor)<<endl;
    return 0;
}


int main(){
    twounique();
}