#include <iostream>
#include <stdio.h>

using namespace std;

int power(int m,int n){
    if (n==0)
        return 1;
    return power(m,n-1)*m;
}
int sum(int n){
    if(n==0)
        return 0;
    return sum(n-1)+n;    
}
int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;    
}
int main()
{
    int p =  power(2,2);
    int s = sum(4);
    int f = fact(4);
    cout<<x;
    return 0;
}
