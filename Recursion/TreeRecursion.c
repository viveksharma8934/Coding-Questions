#include<stdio.h>

int func(int n){
    static int x=0;
    if(n>0){
        printf("%d\n",n);
        func(n-1);
        func(n-1);
    }
}

int main(){
    int x=3;
    func(x);
}