#include <iostream>

using namespace std;


int unique(){
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
    return xorsum;
}


int main(){
  cout<<unique();
}