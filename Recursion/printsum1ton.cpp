#include<iostream>
using namespace std;
int f(int n){
    //non parametrised
    if(n==1) return 1;
    return n + f(n-1);
}
int f(int n, int i){
    //parametrised
    if(i>n) return 0;
    return i + f(n, i+1);
}
int main(){
    int n; cin>>n;
    cout<<f(n, 1);
}
