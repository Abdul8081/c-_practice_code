#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //cout a over b;
    // cout<<pow(a,b);
    bool flag = false;
    if(b<0){
        b = -b;
        flag = true;
    }
    int ans = 1;
    while(b--){
        ans*=a;
    }
    if(flag==false) cout<<ans;
    else cout<<double(1.0/ans);
}