#include<iostream>
using namespace std;
int f(int n){
    int fact = 1;
    while(n>0){
        fact*=n;
        n--;
        
    }
    return fact;
}
int nCr(int n,int r){
    int x = (f(n)/(f(r)*f(n-r)));
    return x;
}

int nPr(int n,int r){
    return (f(n)/(f(n-r)));
}
int main(){
    int n,r; cin>>n>>r;
    cout<<nCr(n,r)<<" "<<nPr(n,r);
}