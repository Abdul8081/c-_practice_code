#include<iostream>
using namespace std;
bool f(int n){
    if(n==2 or n==0) return 1;
    if(n==1) return 0;
    int x = n/2;
    if((2*x)!=n) return false;
    return f(n/2);
}
int main(){
    int n=16;
    cout<<f(n);
}