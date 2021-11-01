#include <stdio.h>
#include <stdlib.h>
#include<iostream>

using namespace std;

double taylor(int n, int m){
    static double  p=1, f =1;
    double r;
    if(n==0)
        return 1;   
    r = taylor(n,m-1);
    p=p*n;
    f=f*m;   
    return r+p/f;
}

int main(){
    printf("%lf",taylor(2,15));
    return 0;
}