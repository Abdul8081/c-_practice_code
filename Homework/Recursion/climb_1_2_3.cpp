#include<iostream>
#include<vector>
using namespace std;
int f(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return f(n-1) + f(n-2) + f(n-3);
}
int main(){
    int n=2;
    cout<<f(n);
}