#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Cell{
    int row,col;
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<Cell> v(n);
        for(i=0;i<n;i++){
            int r,c;
            cin>>r>>c;
            v[i].row=r;
            v[i].col=c;
        }

        sort(v.begin(),v.end(), [](Cell a,Cell b){
            return a.row<b.row;
        }); 

        int ToptoLeft= -1;
        for(int i=1;i<n;i++){
            if(v[i].col==v[i-1].col-1)
                ToptoLeft=i;
            else{
                break;
            }
        }

        int BottomtoRight = -1;
        for(i=n-2;i>=0;i--){
            if(v[i].col==v[i+1].col+1){
                BottomtoRight=i;
            }else{
                break;
            }
        }

        if(v[ToptoLeft].col == 1 or v[BottomtoRight].col== n){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
}