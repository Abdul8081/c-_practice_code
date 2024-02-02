#include<iostream>
#define ll long long int
using namespace std;
int power(ll a, ll b){
    if(b==0) return 1;
    return a * power(a, b-1);
}
int main(){
    ll a, b;
    cin>>a>>b;
    cout<<power(a, b);
}