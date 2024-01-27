#define ll long long int
#include<iostream>
using namespace std;
ll sqrt(ll n){
    ll l = 0;
    ll h = n;
    ll m = 0;
    while(l<=h){
        m = l + (h - l)/2;
        if(m*m==n) return m;
        else if(m*m <n) l = m+1;
        else h = m-1;
    }
    return h;
}
int main(){
    ll x; cin>>x;
    cout<<sqrt(x);
}