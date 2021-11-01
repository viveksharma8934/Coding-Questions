#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int k;                                                            //This is for the matrix with rows as well as column sorted.
    cin>>k;                                                           //To reduce the time complexity.
    bool check;

    int r=0,c=m-1;

    while ((r<n && c>=0))
    {
        if(a[r][c]==k){
            check =true;
        }
        if(a[r][c]>k){
            row++;
        }
        else{
            c--;
        }
    }
    if(check){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
}